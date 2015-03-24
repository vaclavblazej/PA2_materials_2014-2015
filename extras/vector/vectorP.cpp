#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int* a, int* b){
	return *b < *a;
}

int main()
{
	vector<int*> nums;
	nums.push_back(new int(8));
	nums.push_back(new int(2));
	nums.push_back(new int(6));
	nums.push_back(new int(4));
	nums.push_back(new int(9));
	nums.insert(nums.end(), new int(999));
	nums.insert(nums.begin()+2, new int(654));
	sort(nums.begin(), nums.end(), compare);
	vector<int*>::iterator it = nums.begin();
	while(it != nums.end()){
		cout << **it << " ";
		++it;
	}
	cout << endl;
	it = nums.begin();
	delete *it;
	nums.erase(it);
	cout << "size: (" << nums.size() << "): ";
	int * c = new int(10);
	cout << (lower_bound(nums.begin(), nums.end(), c, compare) - nums.begin()) << endl;
	delete c;
	for(int * x : nums){
		cout << * x << " ";
	}
	for(int * x : nums){
		delete x;
	}
	cout << endl;
	return 0;
}

