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
  double finalResult = 100;
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
  Amountpaid = Amountpaid * 100;
  Cost = Cost * 100;
  Change = Amountpaid - Cost;
  Twentydollarbill = Change / 2000;
  Tendollarbill = (Change % 2000) / 1000;
  Fivedollarbill = (Change % 2000 % 1000) / 500;
  Onedollarbill = (Change % 2000 % 1000 % 500) / 100;
  Quarters = (Change % 2000 % 1000 % 500 % 100) / 25;
  Dimes = (Change % 2000 % 1000 % 500 % 100 % 25) / 10;
  Nickels = (Change % 2000 % 1000 % 500 % 100 % 25 % 10) / 5;
  Pennies = (Change % 2000 % 1000 % 500 % 100 % 25 % 10 % 5) / 1;

  // now display number of dollars and coins
  cout << "Your change is: " << endl;;
  cout << "  - twenty-dollar bills: " << Twentydollarbill << endl;
  cout << "  - ten-dollar bills: " << Tendollarbill << endl;
  cout << "  - five-dollar bills: " << Fivedollarbill << endl;
  cout << "  - one-dollar bills: " << Onedollarbill << endl;
  cout << "  - quarters: " << Quarters << endl;
  cout << "  - dimes: " << Dimes << endl;
  cout << "  - nickels: " << Nickels << endl;
  cout << "  - pennies: " << Pennies << endl;

  return 0;
}
