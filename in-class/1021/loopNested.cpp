/*************************************************************************
 *
 * In-Class Exercises:  Assignment for loop conversion
 *
 * File Name: loops.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 141
 * Date:      @@date@@
 */

#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // example #1
  int row, col;

  for (row = 1; row <= 5; row++) {
    for (col = 1; col <= 5; col++) {
      cout << " \t" << row * col;
    }
    cout << endl;
  }

  // example #2
  int i, j;

  for (i = 0; i < 6; i++) {
    for (j = 0; j <= i; j++) {
      cout << " * ";
    }
    cout << endl;
  }
}
