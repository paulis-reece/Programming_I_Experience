/****************************************************************************
 *
 * hw07: Implement a program to find prime numbers up to a user define value.
 *
 * File Name:  prime.cpp
 * Name:       Reece Reklai
 * Course:     CPTR 141
 *
 */

#include <iostream> // for cout and cin
#include <vector>
using namespace std;

int main() {
  int range;
  int remainders;
  int i = 2;
  bool count;
  int r;

  cout << "Premium Prime Printer (twice the primes, half the time)" << endl;
  cout << "========================================================" << endl;
  cout << "Enter Integer Upper Limit (3 or more): ";
  cin >> range;

  while (i <= range) {
    for (int r = 2; r <= i / 2; r++) {
      if (r == 1) {
        count = true;
      }
      if (i % r == 0) {
        count = false;
        break;
      }
    }
    i++;
  }

  if (count == true) {
    cout << i << " is a prime number." << endl;
  }
  return 0;
}