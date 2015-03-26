/* string.h */

#ifndef _STRING_
#define _STRING_

#include <iostream>

class String {
  struct Counter {
    unsigned count;
    int len;
    char *str;
    Counter(const char *s);
    Counter(unsigned l);
  };
  Counter *cnt;
  void acquire(Counter* c) {
    std::cout << "acquire" << std::endl;
    cnt = c;
    ++c->count;
  }
  void release() {
    std::cout << "release" << std::endl;
    if (--cnt->count == 0) {
      delete [] cnt->str;
      delete cnt;
    }
  }
public:
  String(const char * = "");
  String(const String&);
  ~String();
  int length() const {return cnt->len;}
  const char *c_str() const {return cnt->str;}
  String& operator=(const String&);
  String& operator+=(const String&);
  char operator[](int) const;
  void update(int, char);

};

std::ostream& operator<<(std::ostream&, const String&);
String operator+(const String&, const String&);
bool operator==(const String&, const String&);
bool operator!=(const String&, const String&);
bool operator<(const String&, const String&);
bool operator<=(const String&, const String&);
bool operator>(const String&, const String&);
bool operator>=(const String&, const String&);

#endif

