/*************************************************************************
 *
 * In-Class Exercise: Write a phone number parser that accepts a 10-digit
 *                    number of the form DDDDDDDDDD, and prints out:
 *                       a. number of digits
 *                       b. formatted (DDD) DDD-DDDD version
 *                       c. area code only
 *                       e. local number only
 *
 * File Name: phoneNumber.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

  // We use a single string variable in this exercise
  string phone;

  // Prompt the user for input
  cout << "Enter a phone number: ";
  cin >> phone;

  // Display information
  cout << "You entered " << phone.length() << " digits, the first was \"" << phone.at(0) << "\".";

  // Format the phone number
  cout << "You entered" << format.insert(509);

  // Display the various parts

  return 0;
}
