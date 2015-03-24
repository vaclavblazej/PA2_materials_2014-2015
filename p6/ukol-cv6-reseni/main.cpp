#include <iostream>
#include "find.h"
using namespace std;

int main() {
	const int size = 10;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10};
	int *elem = find(arr, size, 6);
	print(arr, size, "arr");
	cout << "found " << *elem << " on index " << elem-arr << endl;
	
	char string[size] = {'h','e','l','l','o','w','o','r','l','d'};
	char *c = find(string, size, 'o');
	sort(string, size);
	print(string, size, "string");
	cout << "found " << *c << " on index " << c-string<< endl;
	return 0;
}
