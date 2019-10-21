/*************************************************************************
 *
 * hw05: An implementation of a decision tree.
 *
 * File Name: decisionTree.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
   int choice;
    int time;
    int numBooksCarry;
    string bus;
    string walk;
    int minutes;
    int books;






  /* YOUR CODE GOES HERE */
  cout << "a. What is the weather like?" << endl;
  cout << "   1 = Hot and Dry" << endl;
  cout << "   2 = Cool and Dry" << endl;
  cout << "   3 = Rainy" << endl;
  cout << "Enter choice: ";
  cin >> choice;
  switch(choice){
      case 3:
      cout << "You had better ride the bus to school.";
      break;
      case 1:
      cout << "b. How much time do you have, in minutes? ";
      cin >> minutes;
      if(minutes < 30) {
          cout << endl;
          cout << "You had better ride the bus to school.";
          } else if(minutes >= 30){
              cout << "c. How many books do you have? ";
              cin >> books;
           if(books <= 2) {
              cout << "You should walk to school.";

              break;}}


  }



  return 0;
}
