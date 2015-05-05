#ifndef __PROGTEST__
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
using namespace std;
#endif /* __PROGTEST__ */

struct Info{
	int price, amount;
	bool operator <(const Info & a)const {
		return price > a.price;
	}
};

struct Prices{
	Prices():number(0){}
	int number;
	set<Info> prices;
};

class CWarehouse
{
public:
	// default constructor
	// destructor
	void Store ( istream & is );
	bool Sell ( const string & name, int items, int & price );
	list<pair<int,int> > List ( const string & name ) const;
private:
	map<string, Prices> index;
	// todo
};

void CWarehouse::Store( istream & is ){
	string line;
	char dummy;
	getline(is, line, ';');
	int price, amount;
	is >> price >> dummy >> amount >> dummy;
	Info d;
	d.price = price;
	set<Info>::iterator a = index[line].prices.find(d);
	if (a == index[line].prices.end() || a->price != price){
		Info tmp;
		tmp.price = price;
		tmp.amount = amount;
		index[line].number += amount;
		index[line].prices.insert(tmp);
	} else {
		a->amount += amount;
		index[line].number += amount;
	}
}

bool CWarehouse::Sell ( const string & name, int items, int & price ){
	if (index[name].number < items){
		return false;
	}
	price = 0;
	for (auto it = index[name].prices.begin(); items > 0; ++it){
		if (it->amount >= items){
			it->amount -= items;
			index[name].number -= items;
			price += items * it->price;
			if (it->amount == 0){
				index[name].prices.erase(it);
			}
			break;
		} else {
			price += it->amount * it->price;
			index[name].number -= it->amount;
			index[name].prices.erase(it);
		}
	}
	return true;
}

list<pair<int,int> > CWarehouse::List ( const string & name ) const{
	list<pair<int, int> > list;
	for (auto it = index[name].prices.begin(); it != index[name].prices.end(); ++it){
		list.push_back(make_pair(it->price, it->amount));
	}
	return list;
}

void showList ( const list< pair<int,int> > & l ) {
	for ( list< pair<int,int> >::const_iterator it = l . begin (); it != l . end (); ++it )
		cout << it -> first << " Kc " << it -> second << "endlx" << endl;
}

int main(){
	CWarehouse  w;
	bool        ok;
	int         price;
	istringstream iss;

	iss . clear ();
	iss . str (
	"Saw;300;10\n"
	"Hammer;100;20\n"
	"Wire cutters;150;15\n"
	"Saw;500;3\n"
	"Hammer;80;14\n"
	"Saw;100;10\n"
	"Hammer;120;4\n"
	"Screw;1;5000\n"
	"Hammer;100;4\n"
	"Hammer;80;10\n"
	);
	w . Store ( iss );
	ok = w . Sell ( "Saw", 5, price ); // ok = true, price = 2100
	ok = w . Sell ( "Saw", 10, price ); // ok = true, price = 2600
	ok = w . Sell ( "Wire cutters", 20, price ); // ok = false
	ok = w . Sell ( "Nail", 100, price ); // ok = false
	iss . clear ();
	iss . str (
	"Wire cutters;200;10\n"
	"Nut;2;800\n"
	"Hammer;20;100\n"
	"Saw;305;12\n"
	);
	w . Store ( iss );
	ok = w . Sell ( "Wire cutters", 20, price ); // ok = true, price = 3500
	showList ( w . List ( "Saw" ) );
	/*
	---8<---8<---8<---8<---8<---8<---
	100 Kc 8x
	305 Kc 12x
	---8<---8<---8<---8<---8<---8<---
	*/
	showList ( w . List ( "Wire cutters" ) );
	/*
	---8<---8<---8<---8<---8<---8<---
	150 Kc 5x
	---8<---8<---8<---8<---8<---8<---
	*/
	showList ( w . List ( "Hammer" ) );
	/*
	---8<---8<---8<---8<---8<---8<---
	120 Kc 4x
	100 Kc 24x
	80 Kc 24x
	20 Kc 100x
	---8<---8<---8<---8<---8<---8<---
	*/
}
