/****************************************************************************
 *
 * hw09: Print the sum of even, odd, and all numbers up to a given number
 *       using functions
 *
 * File Name:  printSums.cpp
 * Name:       Reece Reklai
 * Course:     CPTR 141
 *
 */

#include <iostream>
#include <vector>
using namespace std;

// function definitions
void printSumAll(int num) {
  int sumALL = 0;
  for (int i = 1; i <= num; i++) {
    sumALL += i;
  }
  cout << "Sum of all: " << sumALL << endl;
}
void printSumEven(int num) {
  int sumALL = 0;
  for (int i = 1; i <= num; i++) {
    if (i % 2 == 0) {
      sumALL += i;
    } else {
    }
  }
  cout << "Sum of evens: " << sumALL << endl;
}

void printSumOdd(int num) {
  int sumALL = 0;
  for (int i = 1; i <= num; i++) {
    if (i % 2 != 0) {
      sumALL += i;
    } else {
    }
  }
  cout << "Sum of odds: " << sumALL << endl;
}

// main program

int main() {

  int number;
  char sumType, doAgain;
  bool sumTypeFlag;

  // we will do this until the user is done
  do {

    // collect the number from the user
    do {
      cout << "Enter a positive integer: ";
      cin >> number;
      if (number < 1) {
        cout << "Error! Invalid number." << endl;
      }
    } while (number < 1);

    // ask for the type of sum
    do {
      cout << "Which numbers should I sum? (a=all, e=even, o=odd): ";
      cin >> sumType;
      sumTypeFlag = sumType != 'a' && sumType != 'e' && sumType != 'o';
      if (sumTypeFlag) {
        cout << "Error! Invalid sym type." << endl;
      }
    } while (sumTypeFlag);

    // Make the function call
    switch (sumType) {
    case 'a':
      printSumAll(number);
      break;
    case 'e':
      printSumEven(number);
      break;
    case 'o':
      printSumOdd(number);
      break;
    }

    // should we do this again?
    cout << "Another Sum? (y/n): ";
    cin >> doAgain;

  } while (doAgain == 'y');

  return 0;
}
