/****************************************************************************
 *
 * hw17: Read a file and output any prime numbers to another file
 *
 * File Name: savePrime.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */
#include <fstream>  // for file input and output
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
using namespace std;
ofstream fout;

// prototype
bool isPrime(int number);

int main() {
  int number;
  fout.open("primes.txt");
  if (!fout.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    if (isPrime(number) == cin.fail()) {
      cerr << number;
    } else if (isPrime(number) == true) {
      fout << number << endl;
    } else if (isPrime(number) == false) {
      cin.ignore(1000, '\n');
    }
  }
  fout.close();
}

bool isPrime(int number) {
  // check for prime
  for (int i = 2; i <= number - 1; i++) {
    // number is not prime if n/i has no remainder
    if ((number % i) == 0) {
      return false;
    }
  }
  return true;
}
