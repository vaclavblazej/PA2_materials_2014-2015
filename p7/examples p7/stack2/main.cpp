// main.cpp

#include <cstdlib>
#include <iostream>

#include "stack.h"

using namespace std;

int main() {
  Stack<int> s;
  for (int i=0; i<15; i++)
    s.push(i);
  while (!s.empty()) {
    cout << s.pop() << " ";
  }
  cout << endl;
  //system("PAUSE");
  return 0;
}
