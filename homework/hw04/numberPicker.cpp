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

  cout << "Enter Random Seed: ";
  cin >> Seed;

  cout << endl << "Enter First Number: ";
  cin >> number1;
  srand(number1);

  cout << "Enter Second Number: ";
  cin >> number2;
  srand(number2);

  cout << "Enter Third Number: ";
  cin >> number3;
  srand(number3);
  cout << "Enter Fourth Number: ";
  cin >> number4;
  srand(number4);

  cout << "Enter Fifth Number: ";
  cin >> number5;
  srand(number5);

  return 0;
}
