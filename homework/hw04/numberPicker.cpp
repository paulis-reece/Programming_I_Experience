/*************************************************************************
 *
 * hw04: A program to prompt the user for five numbers and then randomly
 *       pick one of them.
 *
 * File Name: numberPicker.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int Seed;
  int number1;
  int number2;
  int number3;
  int number4;
  int number5;
  int Random;

  cout << "Enter Random Seed: ";
  cin >> Seed;

  cout << endl << "Enter First Number: ";
  cin >> number1;

  cout << "Enter Second Number: ";
  cin >> number2;

  cout << "Enter Third Number: ";
  cin >> number3;

  cout << "Enter Fourth Number: ";
  cin >> number4;

  cout << "Enter Fifth Number: ";
  cin >> number5;

  srand(Seed);
  Random = rand() % 5 + 1;
  if (Random == 1) {
    cout << "I choose: " << number1 << endl;
  } else if (Random == 2) {
    cout << "I choose: " << number2 << endl;
  } else if (Random == 3) {
    cout << "I choose: " << number3 << endl;
  } else if (Random == 4) {
    cout << "I choose: " << number4 << endl;
  } else if (Random == 5) {
    cout << "I choose: " << number5 << endl;
  }

  return 0;
}
