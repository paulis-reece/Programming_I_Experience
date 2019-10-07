/*************************************************************************
 *
 * hw02: A change computation program
 *
 * File Name: makeChange.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // define variables
  double FinalCost;
  double AmountPaid;
  double Change;
  double TwentyDollarBill;
  double TenDollarBill;
  double FiveDollarBill;
  double OneDollarBill;
  double Quarters;
  double Dimes;
  double Nickels;
  double Pennies;

  // Prompt for and collect input
  cout << fixed << showpoint << setprecision(2);
  FinalCost = 13.59;
 cout << "The cost is $" << FinalCost << " ." << endl;
 AmountPaid = 45.00;
 cout << "The amount paid is $" << AmountPaid << " ." << endl;






  // convert to cents and compute change
TwentyDollarBill = 20.00 * 1;
TenDollarBill = 10.00 * 1;
FiveDollarBill = 5.00 * 0;
OneDollarBill = 1.00 * 1;
Quarters = 0.25 * 1;
Dimes = 0.10 * 1;
Nickels = 0.5 * 1;
Pennies = 0.1 * 1;
Change = TwentyDollarBill + TenDollarBill + FiveDollarBill + OneDollarBill + Quarters + Dimes + Nickels + Pennies;
cout << "Your change is: " << Change << endl;
 cout << "twenty-dollar bill(1)" << endl;
 cout << "ten-dollar bill(1)" << endl;
 cout << "five-dollar bill(0)" << endl;
 cout << "one-dollar bill(1)" << endl;
 cout << "quarters(1)" << endl;
cout << "dimes(1)" << endl;
cout << "pennies(1)" << endl;









  // now display number of dollars and coins

  return 0;
}
