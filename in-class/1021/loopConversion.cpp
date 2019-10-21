/*************************************************************************
 *
 * In-Class Exercises:  Assignment for loop conversion
 *
 * File Name: loops.cpp
 * Username:  Reece Reklai
 * Username:  ?
 * Course:    CPTR 141
 * Date:      @@date@@
 */

#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // Convert the following for loop to a while loop
  int count = 0, product = 1;
    int i = 1;
    while(i <= 4){
        product *= i;
        count++;
        i++;
    }

  cout << "product: " << product << ", count: " << count << endl;

  // Convert the following while loop to a do-while loop
  int a = 0, sum = 0;
  do {
    sum += a;
    a--;
  } while (a != -1000);
  cout << "a: " << a << ", sum: " << sum << endl;

  // Convert the following while loop to a for loop
  int x;
  int total = 0;
    for(x = 100;x >= 75; x--){
total += x;
  }
  cout << "x: " << x << ", total: " << total << endl << endl;

  return 0;
}
