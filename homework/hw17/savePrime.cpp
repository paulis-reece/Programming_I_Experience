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
  string file;
  cout << "Input File: ";
  cin >> file;
  fout.open(file);
  if (!fout.is_open()) {
    cout << "Error! Could not open file." << endl;
  } else {
    if (isPrime(number) == cin.fail()) {
      cerr << number;
      cout << "Error! Invalid number found." << endl;
    }
    if (isPrime(number) == true) {
      fout << number << endl;
      cout << "File succesfully processed.";
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
