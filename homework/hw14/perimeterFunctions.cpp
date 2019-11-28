/*************************************************************************
 *
 * hw14: Find the perimeter of several different types of figures
 *
 * File Name: perimeterFunctions.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include "perimeterFunctions.h"
#include <vector>
const double PI = 3.141592653689;

double findPerimeter(double length, int sides) {
  double result;
  result = length * sides;
  return result;
}
double findPerimeter(double radius) {
  double circumference;
  circumference = 2 * PI * radius;
  return circumference;
}