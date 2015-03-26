#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
	return b < a;
}

int main()
{
	vector<int> nums;
	nums.push_back(8);
	nums.push_back(2);
	nums.push_back(6);
	nums.push_back(4);
	nums.push_back(9);
	nums.insert(nums.end(), 999);
	nums.insert(nums.begin()+2, 654);
	sort(nums.begin(), nums.end(), compare);
	vector<int>::iterator it = nums.begin();
	while(it != nums.end()){
		cout << *it << " ";
		++it;
	}
	cout << endl;
	it = nums.begin();
	nums.erase(it);
	cout << "size: (" << nums.size() << "): ";
	int findElem = 4;
	vector<int>::iterator iter = lower_bound(nums.begin(), nums.end(), findElem, compare);
	if(iter != nums.end() && *iter == findElem){
		cout << "found element "
			 << findElem
			 << " at position "
			 << (iter - nums.begin())
			 << endl;
	}else{
		cout << "did NOT find element "
			 << findElem
			 << ", closest 'bigger' element is on position"
			 << (iter - nums.begin())
			 << endl;
	}
	for(int x : nums){
		cout << x << " ";
	}
	cout << endl;
	return 0;
}

