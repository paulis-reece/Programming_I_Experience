/****************************************************************************
 *
 * hw17: Read a file and output any prime numbers to another file
 *
 * File Name: savePrime.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */
#include <fstream>  // for file input and output
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
using namespace std;
ofstream fout;
ifstream fin;

// prototype
bool isPrime(int number);

int main() {
  int number;
  string file;
  cout << "Input File: ";
  cin >> file;
  if (cin.fail()) {
    cerr << "Error! Could not open file.";
  }
  fin.open(file);
  fout.open("primes.txt");
  if (!fin.is_open()) {
    cerr << "Error! Could not open file.";
  } else {
    while (!fin.eof()) {
      fin >> number;
      if (fin.fail()) {
        cerr << "Error! Invalid number found." << endl;
        fin.clear();
        fin.ignore(1000, '\n');
      } else if (isPrime(number) == true) {
        fout << number << endl;
      } else if (isPrime(number) == false) {
        fin.clear();
        fin.ignore(1000, '\n');
      }
    }
  }
  if (fin.is_open()) {
    cout << "File succesfully processed.";
  }
  fin.close();
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
