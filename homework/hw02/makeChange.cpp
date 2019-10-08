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
  double Cost;
  double Amountpaid;
  int Change;
  int Twentydollarbill;
  int Tendollarbill;
  int Fivedollarbill;
  int Onedollarbill;
  int Quarters;
  int Dimes;
  int Nickels;
  int Pennies;

  // Prompt for and collect input
  cout << "Enter the cost in dollars and cents: $";
  cin >> Cost;
  cout << "Enter the amount paid in dollars and cents: $";
  cin >> Amountpaid;

  // convert to cents and compute change
  Change = Amountpaid - Cost;
  Twentydollarbill = Change - 2000 / 100;
  Tendollarbill = Change- Twentydollarbill * 1000 / 100;
  Fivedollarbill = Change - Tendollarbill * 500 / 100;
  Onedollarbill = Change - Fivedollarbill * 100 / 100;
  Quarters = Change - Onedollarbill * 25/100;
  Dimes = Change -Quarters * 10/100;
  Nickels = Change-Dimes * 5/100;
  Pennies = Change - Nickels * 1/100;
  Change = Pennies;

  // now display number of dollars and coins
  cout << "Your change is: $" << Change << endl;
  cout << "- twenty-dollar bills: " << Twentydollarbill << endl;
  cout << "- ten-dollar bills: " << Tendollarbill << endl;
  cout << "- five-dollar bills: " << Fivedollarbill << endl;
  cout << "- one-dollar bills: " << Onedollarbill << endl;
  cout << "- quarters: " << Quarters << endl;
  cout << "- dimes: " << Dimes << endl;
  cout << "- nickels: " << Nickels << endl;
  cout << "- pennies: " << Pennies << endl;

  return 0;
}
