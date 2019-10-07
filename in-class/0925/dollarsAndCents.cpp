/*************************************************************************
 *
 * In-Class Demonstration:  Formatting the Output of a Floating-Point Var
 *
 * File Name: dollarsAndCents.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   // define variables for user input
   double money;
   int children;

   // get the numbers

   cout << fixed << showpoint << setprecision (2);
   cout << "How much money do you have in your pocket? $";
   cin >> money;
   cout << "How many children do you have? ";
   cin >> children;

int childrensMoney = ( money / children ) * 100;
double yourMoney = money- childrensMoney * children / 100.0 ;

   // print out the results
   cout << endl;
   cout << "Give each child $" << childrensMoney/100.0;
   cout << " and keep $" << yourMoney << " for yourself." << endl;

   return 0;
}
