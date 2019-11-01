/****************************************************************************
 *
 * hw09: Print the sum of even, odd, and all numbers up to a given number
 *       using functions
 *
 * File Name:  printSums.cpp
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include <iostream>
using namespace std;

// function definitions

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
