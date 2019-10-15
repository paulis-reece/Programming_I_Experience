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

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  const double hoursWorked = 18.50;
  const double withHoldingsSS = (0.062);
  const double withholdingsMedicare = (0.0145);
  const double withholdingsFederalTax = (0.15);
  const double withholdingsFlat = 10;
  double grossPay;
  double withholdings;
  double Netpay;
  int hours;
  int OT_HOURS = 40;
  int numDependents;

  cout << "Enter the number of hours worked: ";
  cin >> hours;
  cout << "Enter the number of dependents: ";
  cin >> numDependents;

  // compute gross pay
  cout << fixed << showpoint << setprecision(2);
  if (hours < OT_HOURS) {
    grossPay = hoursWorked * hours;
    withholdings =
        (grossPay * (withHoldingsSS + withholdingsMedicare +
                     (withholdingsFederalTax - (0.01 * numDependents)))) +
        withholdingsFlat;
    Netpay = grossPay - withholdings;
  } else {
    grossPay = hoursWorked * hours + ((hours - OT_HOURS) * 9.25);
    withholdings =
        (grossPay * (withHoldingsSS + withholdingsMedicare +
                     (withholdingsFederalTax - (0.01 * numDependents)))) +
        withholdingsFlat;
    Netpay = grossPay - withholdings;
  }
  cout << endl << "Your gross pay is: $" << grossPay << endl;
  cout << "The withholdings are: $" << withholdings << endl;
  cout << "So that your net pay is: $" << Netpay << endl;

  return 0;
}
