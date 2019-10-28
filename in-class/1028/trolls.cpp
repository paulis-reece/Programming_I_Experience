/*************************************************************************
 *
 * In-Class Exercise: Using Vectors to Store Prices and More
 *
 * File Name: trolls.cpp
 * Course:    CPTR 141
 */

#include <iostream> // for cin and cout
#include <vector>   // for vectors
using namespace std;

/*====================================================================
 * Main program
 */

int main() {

  // define your variables here
  const int NUM = 5;
  vector<double>prices(NUM);

  // loop to collect information
  for (int i = 0; i < NUM; i++) {
      cout << "Enter Price: " << i + 1 << ": ";
      cin >> prices.at(i);


  }
cout << "The prices are: ";
  // loop to print out prices
  for (int i = 1; i < NUM; i++) {
      cout << prices.at(i);
      if(i >= NUM - 1){
          continue;
  }
  cout << ", ";
  if(i <= NUM - 1){
      cout << "and";
  }
  }
  return 0;
}