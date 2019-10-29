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
  int lim;
  bool isPrime;

  cout << "Premium Prime Printer (twice the primes, half the time)" << endl;
  cout << "=======================================================" << endl;
  cout << "Enter Integer Upper Limit (3 or more): " << endl;
  ;
  cin >> lim;
  while (lim < 3) {
    cout << "Error!  Please enter a number bigger than 2." << endl
         << "Enter Integer Upper Limit (3 or more): " << endl;
    cin >> lim;
  }
  for (int i = 2; i <= lim; i++) {
    isPrime = true;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrime = false;
      }
    }
    if (isPrime == true) {

      cout << i << " is a prime number." << endl;
    }
  }

  return 0;
}