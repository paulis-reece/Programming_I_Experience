/*************************************************************************
 *
 * Checkpoint Assignment:  This program is supposed to calculate the
 *                         surface area of a closed cylindar based on
 *                         a user-provided height and radius.  Recall
 *                         that the formula is 2*pi*r*h + 2*pi*r^2
 *
 * File Name: errors.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Date:      @@date@@
 *
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  cout << "Enter the cylindar : ";

  int radius;

  cin >> radius;

  cout << "Enter the cylindar: ";

  int height;

  cin >> height;

  double c;

  c = 3.14159;

  double surface_area = 2 * radius * height * c + 2 * pow(2, radius);

  cout << "The surface area is: " << surface_area << endl;

  return 0;
}
