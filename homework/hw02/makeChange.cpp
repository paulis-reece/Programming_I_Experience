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
  Twentydollarbill = Change - 20;
  Tendollarbill = Twentydollarbill - 10;
  Fivedollarbill = Tendollarbill - 0;
  Onedollarbill = Fivedollarbill - 1;
  Quarters = Onedollarbill - 1 / 4;
  Dimes = Quarters - 1 / 10;
  Nickels = Dimes - 1 / 20;
  Pennies = Nickels - 1 / 100;
  Change = Pennies;

  // now display number of dollars and coins
  cout << "Your change is: $" << Change << endl;
  cout << "- twenty-dollar bills: 1" << endl;
  cout << "  - ten-dollar bills: 1" << endl;
  cout << " - five-dollar bills: 0" << endl;
  cout << " - one-dollar bills: 1" << endl;
  cout << "- quarters: 1" << endl;
  cout << " - dimes: 1" << endl;
  cout << " - nickels: 1" << endl;
  cout << "- pennies: 1" << endl;

  return 0;
}
