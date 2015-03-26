/* string.cpp */

#include <cstring>

#include "string.h"

String::Counter::Counter(const char *cstr) {
  std::cout << "Counter(" << cstr << ")" << std::endl;
  count = 1;
  len = strlen(cstr);
  str = new char[len+1];
  strcpy(str, cstr);
}

String::Counter::Counter(unsigned l) {
  std::cout << "Counter(" << l << ")" << std::endl;
  count = 1;
  len = l;
  str = new char[len+1];
}

String::String(const char *cstr) {
  std::cout << "String(" << cstr << ") " << std::endl;
  if (cstr==0) cstr = "";   //tento prikaz zvysi bezpecnost
  cnt = new Counter(cstr);
} 

String::String(const String& s) {
  acquire(s.cnt);
}

String::~String() {
  release();
}

String& String::operator=(const String& s) {
  if (this != &s) {
    release();
    acquire(s.cnt);
  }
  return *this;
}

String& String::operator+=(const String& s) {
  Counter *ncnt = new Counter(length()+s.length());
  strcpy(ncnt->str, cnt->str);
  strcat(ncnt->str, s.cnt->str);
  cnt = ncnt;
  return *this;
}

char String::operator[](int i) const {
  if (i<0 || i>cnt->len)
    throw "nedovoleny index";
  return cnt->str[i];
}

void String::update(int i, char c) {
  if (i<0 || i>cnt->len)
    throw "nedovoleny index";
  if (cnt->count>1) {
    release();
    cnt = new Counter(cnt->str);
  }
  cnt->str[i] = c;
}

std::ostream& operator<<(std::ostream& os, const String& s) {
  os << s.c_str();
  return os;
}

String operator+(const String& s1, const String& s2) {
  String res = s1;
  res += s2;
  return res;
}

bool operator==(const String& s1, const String& s2) {
  return strcmp(s1.c_str(), s2.c_str())==0;
}

bool operator!=(const String& s1, const String& s2) {
  return strcmp(s1.c_str(), s2.c_str())!=0;
}

bool operator<(const String& s1, const String& s2) {
  return strcmp(s1.c_str(), s2.c_str())<0;
}

bool operator<=(const String& s1, const String& s2) {
  return strcmp(s1.c_str(), s2.c_str())<=0;
}

bool operator>(const String& s1, const String& s2) {
  return strcmp(s1.c_str(), s2.c_str())>0;
}

bool operator>=(const String& s1, const String& s2) {
  return strcmp(s1.c_str(), s2.c_str())>=0;
}
