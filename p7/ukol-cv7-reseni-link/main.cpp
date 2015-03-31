#include <iostream>
using namespace std;
#include "queue.h"

int main()
{
	const int n = 23;
	
	Queue<int> que;
	cout << "Adding: ";
	for (int i = 0, j = n/6; i < n; i++) {
		j = (j * 7) % n;
		cout << j << " ";
		que.add(j);
	}
	cout << endl;
	cout << "Queue:  ";
	while(!que.empty()){
		cout << que.front() << " ";
		que.remove();
	}
	cout << endl;

	return 0;
}

