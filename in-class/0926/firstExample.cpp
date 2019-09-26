/*************************************************************************
 *
 * In-Class Demonstration:  Prompt for two numbers and display their sum
 *
 * File Name: firstExample.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {
  int firstInt;
  int secondInt;
  int sum;
  // Prompt user for input one integer
  cout << "Enter Your First Integer: ";
  cin >> firstInt;

  // Prompt user for input second integer
  cout << "Enter Your Second Integer: ";
  cin >> secondInt;

  // calculate sun
  sum = firstInt + secondInt;

  // Print sum
  cout << "The Sum is : " << firstInt << " + " << secondInt << " = " << sum
       << endl;
}
