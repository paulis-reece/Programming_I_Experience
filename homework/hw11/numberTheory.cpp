/****************************************************************************
 *
 * hw11:  A library of simple functions
 *
 * File Name:  numberTheory.cpp
 * Name:       Reece Reklai
 * Course:     CPTR 141
 *
 */
bool divisible(int, int) {
int a, b;
  if (a % b == 0) {
    return true;
  } else {
    return false;
  }
}
int gcd(int, int) {
  int c,d;
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
int gcd(int,int, int){
  int e,f,g;
  int  GCD = 0;
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
