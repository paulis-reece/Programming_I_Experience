/*************************************************************************
 *
 * hw04: Compute the gross pay, withholdings, and net pay for an
 *       employee given the number of hours worked and number of
 *       dependents.
 *
 * File Name: paycheck.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double hoursWorked = 18.50;
     double withHoldingsSS = (0.062);
     double withholdingsMedicare = (0.0145);
     double withholdingsFederalTax = (0.15); // 1% percent less for each dependent
     double withholdingsFlat = 10;
     double grossPay;
     double withholdings;
     double Netpay;
     int OverTime;
    double hours;
    double OT_HOURS = 40;
    int numDependents;


    cout << "Enter the number of hours worked: ";
    cin >> hours;
    cout << "Enter the number of dependents: ";
    cin >> numDependents;


  // compute gross pay
  if (hours < OT_HOURS) {
grossPay = hoursWorked*hours;
withholdings = (withHoldingsSS + withholdingsMedicare + (withholdingsFederalTax - (0.01 * numDependents))  + withholdingsFlat);
 Netpay = grossPay - withholdings;
  } else {
      OverTime = 9.25 * (hours - OT_HOURS);
      grossPay = hoursWorked*hours+OverTime;
      withholdings = (grossPay * (withHoldingsSS + withholdingsMedicare + (withholdingsFederalTax - (0.01 * numDependents)))) + withholdingsFlat;
      Netpay = grossPay - withholdings;
 }
cout << "Your gross pay is: $" << grossPay << endl;
cout << "The withholdings are: $" << withholdings << endl;
cout << "So that your net pay is: $" << Netpay << endl;

  return 0;
}
