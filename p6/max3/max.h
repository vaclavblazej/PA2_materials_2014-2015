// max.h
#ifndef _MAX_H_
#define _MAX_H_

template <class T>
T maxi(T x, T y) {
  return x>y ? x : y;
}

template <class T>
T maxi(T x, T y, T z) {
  return x>y ? (x>z ? x : z) : (y>z ? y : z);
}

#endif