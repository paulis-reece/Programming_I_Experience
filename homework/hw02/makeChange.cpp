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
  double CostInDollarsCents = 13.59;
  double AmountPaidInDollarsCents = 45.00;
  double change;
  int TwentyDollarBill = 2000;
  int TenDollarBill = 1000;
  int FiveDollarBill = 0;
  int OneDollarBill = 100;
  int Quarters = 25;
  int Dimes = 10;
  int Nickels = 5;
  int Pennies = 1;

  // Prompt for and collect input
  cout << fixed << showpoint << setprecision(2);
  cout << "The cost in dollars and cents: " << CostInDollarsCents << endl;
  cout << fixed << showpoint << setprecision(2);
  cout << "The amount paid in dollars and cents: " << AmountPaidInDollarsCents
       << endl;
       cout << fixed << showpoint << setprecision(2);
  cout << "Your change is: " << change << endl;

  // convert to cents and compute change
  cout << fixed << showpoint << setprecision(2);
  cout << change << (AmountPaidInDollarsCents - CostInDollarsCents);




  // now display number of dollars and coins

  return 0;
}
