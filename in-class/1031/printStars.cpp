/*************************************************************************
 *
 * In-Class Example: Working with Functions
 *
 * File Name: showStars.cpp
 * Course:    CPTR 141
 */

#include <iostream> // for cin and cout
using namespace std;

// original function
void printStars(int num, char symbol, bool newLine) {
  for (int i = 0; i < num; i++) {
    cout << symbol;
  }
  if(newLine){
      cout <<endl;
  }
}

// Here is the main program
int main() {

  // Test your functions in the main program
  printStars(2 + 3, '*', true);

  printStars(2 + 3, '=', false);

  printStars(2 + 3, '-', true);

  return 0;
}

// Function definitions go here
