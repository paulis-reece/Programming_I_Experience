/****************************************************************************
 *
 * hw17: Read a file and output any prime numbers to another file
 *
 * File Name: savePrime.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

using namespace std;

// prototype
bool isPrime(int number);


int main() {
   
  /* YOUR CODE GOES HERE */
   
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
