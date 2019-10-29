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
  bool containsDoubles;

  cout << "Welcome to the DoubleChecker(TM) word checker" << endl;
  cout << "=============================================" << endl;
  cout << "Enter a word to check: ";
  cin >> word;

  /* YOUR CODE GOES HERE */
  for (int i = 1; i <= word.size() - 1; i++) {
    containsDoubles = false;
    if (word.at(i) == word.at(i - 1)) {
      containsDoubles = true;
      break;
    }
  }

  if (containsDoubles == 1) {
    cout << endl;
    cout << "There are double characters in the word." << word << endl;
  } else if (containsDoubles == 0) {
    cout << endl;
    cout << "I could not find any double characters." << endl;
  }

  return 0;
}
