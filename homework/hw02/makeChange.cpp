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
  Amountpaid = Amountpaid * 100;
  Cost = Cost * 100;
 Change = Amountpaid - Cost;
  Twentydollarbill = Change / 2000;
  Tendollarbill = (Change - (Twentydollarbill * 2000)) / 1000;

  Fivedollarbill = (Change - ((Tendollarbill * 1000) + (Twentydollarbill * 2000))) / 500;

  Onedollarbill =
      (Change - (((Tendollarbill * 1000) + (Twentydollarbill * 2000) +
                 (Fivedollarbill * 500)))) / 100;
  Quarters = (Change - ((((Tendollarbill * 1000) + (Twentydollarbill * 2000) +
              (Fivedollarbill * 500) + (Onedollarbill * 100))))) /
             25;
  Dimes = (Change - ((((Tendollarbill * 1000) + (Twentydollarbill * 2000) +
           (Fivedollarbill * 500) + (Onedollarbill * 100) + (Quarters * 25))))) /
          10;
  Nickels = (Change - (((((Tendollarbill * 1000) + (Twentydollarbill * 2000) +
             (Fivedollarbill * 500) + (Onedollarbill * 100) + (Quarters * 25) +
             (Dimes * 10)))))) /
            5;
  Pennies = (Change - (((((((Tendollarbill * 1000) + (Twentydollarbill * 2000) +
             (Fivedollarbill * 500) + (Onedollarbill * 100) + (Quarters * 25) +
             (Dimes * 10) + (Nickels* 5)))))))) /
            1;


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
