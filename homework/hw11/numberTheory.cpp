/****************************************************************************
 *
 * hw11:  A library of simple functions
 *
 * File Name:  numberTheory.cpp
 * Name:       Reece Reklai
 * Course:     CPTR 141
 *
 */
#include "numberTheory.h"
#include <cassert>
#include <iostream>
#include <string>
using namespace std;

bool divisible(int a, int b) {
  bool ans;
  assert( a > 0 && b > 0);
  if (a % b == 0) {

    return true;
  } else if(a % b > 0) {
    return false;
  }
}
int gcd(int c, int d) {
  assert(c > 0 && d > 0);
  int greatestFactor = 0;
  if (c == 0 || d == 0) {
    return 0;
  } else if (c == d) {
    return c;
  } else {
    for (int i = 1; i <= c && i <= d; i++) {
      if (c % i == 0 && d % i == 0) {
        greatestFactor = i;
      }
    }
  }
  return greatestFactor;
}
int gcd(int e, int f, int g) {
  assert(e > 0 && f > 0 && g > 0);
  int GCD = 0;
  if (e == 0 || f == 0 || g == 0) {
    GCD = 0;
  } else if (e == f && f == g) {
    GCD = e;
  } else {
    for (int i = 1; i <= e && i <= f && i <= g; i++) {
      if (e % i == 0 && f % i == 0 && g % i == 0) {
        GCD = i;
      }
    }
  }
  return GCD;
}
