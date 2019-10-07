/*************************************************************************
 *
 * In-Class Demonstration: Generate a random addition problem with a given
 *                         number of digits
 *
 * File Name: addition.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

   // define variables
   int seed;
   int numberOfDigits;
   int randomNumber1;
   int randomNumber2;

   // prompt for and set seed
   cout << "Enter Random Seed: ";
   cin >> seed;

   // prompt for and get number of digits
   cout << "Number of Digits: ";
   cin >> numberOfDigits;

   // generate random numbers
   srand(seed);
   randomNumber1 = rand() % static_cast<int>(pow(10, numberOfDigits));
   randomNumber2 = rand() % static_cast<int>(pow(10, numberOfDigits));

   // print out problem
   cout << setw(7) << randomNumber1 << endl;
   cout << "+" << setw(6) << randomNumber2 << endl;
   cout << "-------" << endl;

   return 0;
}
