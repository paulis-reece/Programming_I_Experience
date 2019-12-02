/*

Name: Reece Reklai

Date:

Project 3

 */
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <vector>   // for vectors
using namespace std;

// Functions and Global Variable
const int row = 10; // Global Variable
const int column = 30; // Global Variable

void printSeats(int array[row][column]) {
int reservation = 0;
  for (int r = 1; r <= row; r++) {
    for (int c = 1; c <= column; c++) {
        cout << "#";
      }
      cout << endl;
    }
cout << endl;
cout << "Back Row Seats" << endl;
}
int main() {
  double price;
  bool decision;
  int Seats[row][column];
  cout << "Front Row Seats" << endl;
  cout << endl;
  printSeats(Seats);
  cout << endl;
  cout << "Welcome to the reservation seat program" << endl;
  cout << "---------------------------------------" << endl;
  cout << endl;
  cout << "All seats are currently free in the theater, there are ten rows and thirty columns on each row." << endl;
  cout << "The prices for each seat is up to your discretion." << endl;
  cout << "What is the price: $";
  cin >> price;
  if(price < 0){
while(price < 0){
cout << "Please enter a valid integer" << endl;
cout << "What is the price: $";
cin >> price;
}
  }





  return 0;
}