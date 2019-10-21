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

  int num(2), accumulator(0);
  while (num < 20) {
    num++;
    if (num == 10 || num == 11) {
      // termination statement
    }
    accumulator += num;
  }
  cout << "The sum is " << accumulator << endl;

  return 0;
}
