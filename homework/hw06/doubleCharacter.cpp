/****************************************************************************
 *
 * hw06: Prompt the user for a word and then check it for double characters.
 *
 * File Name: double.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include <iostream> // for cout and cin
#include <string>   // for string commands
using namespace std;

int main() {

  string word;
  int counter;
  bool letters;

  cout << "Welcome to the DoubleChecker(TM) word checker" << endl;
  cout << "=============================================" << endl;
  cout << "Enter a word to check: ";
  cin >> word;

  /* YOUR CODE GOES HERE */
  for (int i = 1; i <= word.size(); i++)
    if (word.at(0) == word.at(i - 1)) {
      letters = 1;
      break;}

  if (letters == 1) {
    cout << endl;
    cout << "There are double characters in the word " << word << endl;
  } else if (letters == 0) {
    cout << endl;
    cout << "I could not find any double characters." << endl;
  }

  return 0;
}
