#ifndef __PROGTEST__
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <string>
using namespace std;
#endif /* __PROGTEST__ */
 
class CNameException{
	public:
	friend ostream & operator<<(ostream & os, const CNameException & n) {
		os << "its broken";
		return os;
	}
};

struct TStop {
	TStop (const string & name) : m_Next (NULL), m_Prev (NULL), m_Name (name) {};
	TStop * m_Next;
	TStop * m_Prev;
	string  m_Name;
};

class CBusLine {
public:
	CBusLine(){
		m_Terminal1 = NULL;
		m_Terminal2 = NULL;
		stops = 0;
	}
	CBusLine(istream & is){
		m_Terminal1 = NULL;
		m_Terminal2 = NULL;
		stops = 0;
		string s;
		while(getline(is, s)){
			if(s != ""){
				add(s);
			}
		}
	}
	void add(string station){
		stops++;
		if (m_Terminal1 == NULL){
			TStop *tmp = new TStop(station);
			m_Terminal1 = tmp;
			m_Terminal2 = tmp;
		} else {
			TStop * tmp = m_Terminal2;
			tmp->m_Next = new TStop(station);
			m_Terminal2 = tmp->m_Next;
			m_Terminal2->m_Prev = tmp;
		}
	}
	CBusLine & operator=(const CBusLine & a){
		if (&a == this) return *this;
		while(m_Terminal1 != NULL){
			TStop * tmp = m_Terminal1;
			m_Terminal1 = m_Terminal1->m_Next;
			delete tmp;
		}
		stops = a.stops;
		m_Terminal1 = NULL;
		m_Terminal2 = NULL;
		TStop * tmp = a.m_Terminal1;
		while (tmp != NULL){
			add(tmp->m_Name);
			tmp = tmp->m_Next;
		}
		return *this;
	}
	~CBusLine(){
		while(m_Terminal1 != NULL){
			TStop * tmp = m_Terminal1;
			m_Terminal1 = m_Terminal1->m_Next;
			delete tmp;
		}
	}
	void Remove (const string & stop){
		TStop * tmp = m_Terminal1;
		while (tmp != NULL){
			if (tmp->m_Name == stop){
				TStop * prev = tmp->m_Prev;
				TStop * next = tmp->m_Next;
				if (tmp != m_Terminal1){ prev->m_Next = next; }
				if (tmp != m_Terminal2) { next->m_Prev = prev; }
				delete tmp;
				tmp = next;
				stops--;
			} else {
				tmp = tmp->m_Next;
			}
		}
	}
	CBusLine Trip (const string & from, const string & to) const{
		CBusLine line;
		TStop *tmp = m_Terminal1;
		TStop *first = NULL, *second = NULL;
		int f, s, i = 0;
		while(tmp != NULL){
			if (tmp->m_Name == from){ f = i; first = tmp; }
			if (tmp->m_Name == to){ s = i; second = tmp; }
			i++;
			tmp = tmp->m_Next;
		}
		if (first == NULL || second == NULL){
			throw CNameException();
		} else {
			tmp = first;
			if (f < s) {
				while (tmp != second){
					line.add(tmp->m_Name);
					tmp = tmp->m_Next;
				}
			} else {
				while (tmp != second){
					line.add(tmp->m_Name);
					tmp = tmp->m_Prev;
				}
			}
			line.add(tmp->m_Name);
		}
		return line;
	}
	int Stops(){
		return stops;
	}
	int stops;
	friend ostream & operator<<(ostream &os, const CBusLine & l) {
		TStop * tmp = l.m_Terminal1;
		while(tmp != NULL){
			if (tmp != l.m_Terminal1) cout << "-> ";
			os << tmp->m_Name << endl;
			tmp = tmp->m_Next;
		}
		return os;
	}
private:
	TStop * m_Terminal1, * m_Terminal2;
	friend class CTester;
};

int main(){
	istringstream is;
	int            l;
	is.clear ();
	is.str ("New Hampton\nLondon\nNew York\n\nPrague");
	CBusLine a(is);
	l = a . Trip ("London", "Prague").Stops(); //l = 3
	cout << l << endl;
	cout << a . Trip ("London", "Prague");
	 
	/* ------------------------------------
	London
	-> New York
	-> Prague
	------------------------------------ */

	l = a . Trip ("New York", "New Hampton").Stops(); //l = 3
	cout << l << endl;
	cout << a . Trip ("New York", "New Hampton");

	/* ------------------------------------
	New York
	-> London
	-> New Hampton
	------------------------------------ */


	l = a . Trip ("London", "London").Stops(); //l = 1
	cout << l << endl;
	cout << a . Trip ("London", "London");

	/* ------------------------------------
	London
	------------------------------------ */

	a . Remove("London");
	l = a . Trip ("New York", "New Hampton").Stops(); //l = 3
	cout << l << endl;
	cout << a . Trip ("New York", "New Hampton");

	/* ------------------------------------
	New York
	-> New Hampton
	------------------------------------ */


	is.clear ();
	is.str ("New Hampton\nLondon\n\n\n\nLondon\nLondon\nNew York\n\nPrague");
	CBusLine b(is);
	l = b . Trip ("New Hampton", "New York").Stops(); //l = 3
	cout << l << endl;
	cout << b . Trip ("New Hampton", "New York");

	/* ------------------------------------
	New Hampton
	-> London
	-> London
	-> London
	-> New York
	------------------------------------ */
}
