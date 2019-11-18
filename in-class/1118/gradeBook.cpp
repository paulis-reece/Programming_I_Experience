/*************************************************************************
 *
 * In-Class Exercise and Demo: Building a Gradebook
 *
 * File Name: gradeBook.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream> // for cin and cout
using namespace std;

const int STUDENTS = 5;
const int SCORES = 4;

double Getaverage(int data[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += data[i];
  }
  return sum / size;
}

double getOverallAverage(int data[][SCORES], int size) {
  double sum = 0;
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      sum += data[row][col];
    }
  }
  return sum / (size * SCORES);
}

/*====================================================================
 * Main program
 */

int main() {

  // define a 2D array of scores
  const int STUDENTS = 5;
  const int SCORES = 4;
  int grades[STUDENTS][SCORES] = {
      {73, 62, 42, 59}, // grades for student 1
      {91, 97, 83, 81}, // grades for student 2
      {78, 82, 91, 90}, // grades for student 3
      {83, 74, 69, 72}, // grades for student 4
      {95, 74, 83, 89}  // grades for student 5
  };

  // Find and display the lowest score for each student
  cout << "Average Scores" << endl;
  int lowest = 0;
  for (int row = 0; row < STUDENTS; row++) {
    double average = Getaverage(grades[row], SCORES);
    cout << "Student" << (row + 1) << ": " << average << endl;
  }

  // Find and display the highest overall score
  cout << "Average Overall Score " << getOverallAverage(grades, STUDENTS);

  // end program
  return 0;
}
