/*************************************************************************
 *
 * In-Class Exercise:  Compute the volumn of a right circular cylindar
 *                     of a given radius and height
 *
 * File Name: volume.cpp
 * Course:    CPTR 141
 *
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {

  // define constant
  const double PI = 3.14159;

  // define variables
  double radius;
  double height;
  double volume;
  cout << "Enter Radius: ";
  cin >> radius;
  cout << "Enter Height: ";
  cin >> height;

  // prompt for input
  cout << "Enter Radius: " << radius << endl;
  cout << "Enter Height: " << height << endl;

  // print out the volume (use the pow function)
  volume = (PI * pow(radius, 2) * height);

  return 0;
}
