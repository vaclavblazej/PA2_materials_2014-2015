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
	cout << (lower_bound(nums.begin(), nums.end(), 10, compare) - nums.begin()) << endl;
	for(int x : nums){
		cout << x << " ";
	}
	cout << endl;
	return 0;
}

