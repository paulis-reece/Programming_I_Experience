/*************************************************************************
 *
 * In-Class Demonstration:  Compute the slope between two points.
 *
 * File Name: slope.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {

  // define variables
  double x1, y1, x2, y2;
  double slope;
  char garbage;

  // prompt for input
  cout << "Enter point one (x,y)";
  cin >> garbage;
  cin >> x1;
  cin >> garbage;
  cin >> y1;
  cin >> garbage;

  cout << "Enter point two (x, y)";
  cin >> garbage;
  cin >> x2;
  cin >> garbage;
  cin >> y2;
  cin >> garbage;

  // print out the slope

  slope = (y2 - y1) / (x2 - x1);
  cout << endl << "THe slope between these points is:" << slope << endl;


  return 0;
}
