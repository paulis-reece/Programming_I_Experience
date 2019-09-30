/*************************************************************************
 *
 * In-Class Demonstration:  Formatting the Output of a Floating-Point Var
 * 
 * File Name: dollarsAndCents.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {
   
   // define variables for user input
   double money;
   int children;
   
   // get the numbers
   cout << "How much money do you have in your pocket? $";
   cin >> money;
   cout << "How many children do you have? ";
   cin >> children;
   
   // print out the results
   cout << endl;
   cout << "Give each child $" << (money / children);
   cout << " and keep $" << money << " for yourself." << endl;
   
   return 0;
}
