/****************************************************************************
 *
 * hw08: Calculate the average for a user-entered number of grades
 *
 * File Name:  gradeCalculator.cpp
 * Name:       Reece Reklai
 * Course:     CPTR 141
 *
 */

#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <numeric>
#include <vector> // for vectors
using namespace std;

int main() {
  int sum = 0;
  double gradeNum;
  int i = 1;
  double ileration = 1;
  bool average;

  // opening prompt
  cout << "Enter a score between 0 and 100 on each line." << endl;
  cout << "Enter a negative number to finish." << endl;
  cout << endl;
  cout << "Grade #1: ";
  cin >> gradeNum;
  vector<double> gradeBook = {gradeNum};

  /* Your Code Here */
  if (gradeNum < 0) {
    average = false;
  }
  if (gradeNum >= 0) {
    average = true;
    while (gradeNum >= 0) {
      if (gradeNum > 100) {
        while (gradeNum > 100) {
          i = i;
          cout << "Error!  Grades may not be more than 100." << endl;
          cout << "Grade #" << i << ": ";
          cin >> gradeNum;
          if (gradeNum >= 0 && gradeNum <= 100) {
            gradeBook.push_back(gradeNum);
            ileration++;
          } else if (gradeNum < 0) {
            break;
          }
        }
      }
      if (gradeNum >= 0 && gradeNum <= 100) {
        i++;
        cout << "Grade #" << i << ": ";
        cin >> gradeNum;
        if (gradeNum >= 0 && gradeNum <= 100) {
          gradeBook.push_back(gradeNum);
          ileration++;
        }
      }
    }
  }

  if (average == false) {
    cout << "No grades were entered.";

  } else if (average == true) {
    for (int i = 0; i < gradeBook.size(); i++) {
      sum += gradeBook[i];
    }
    cout << "Your avearge is: ";
    cout << fixed << setprecision(2);
    cout << sum / ileration;
  }
  return 0;
}
