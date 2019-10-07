/*************************************************************************
 *
 * hw01: A mad-libs introduction to a famous song from Aladdin
 *
 * File Name: wholeNewWorld.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include <iostream> // included for cin and cout processing
using namespace std;
#include <string>
int main() {

  // define your variables below
  string ADJECTIVE1;
  string NOUN;
  string ADJECTIVE2;
  string COMMAND;
  string QUESTION;
  string VERB;
  string VERBING;
  string ADJECTIVE3;
  string PREPOSITION;

  // gather user input using cin << variableName
  cin >> ADJECTIVE1;
  cin >> NOUN;
  cin >> ADJECTIVE2;
  cin >> COMMAND;
  cin >> QUESTION;
  cin >> VERB;
  cin >> VERBING;
  cin >> ADJECTIVE3;
  cin >> PREPOSITION;

  // print out the "song"
  cout << "Enter an adjective: "
       << "Enter a noun: "
       << "Enter another adjective: "
       << "Enter a command: "
       << "Enter a question word: "
       << "Enter a verb: "
       << "Enter a verb ending in 'ing': "
       << "Enter another adjective: "
       << "Enter a preposition:" << endl;

  cout << "A whole " << ADJECTIVE1 << " " << NOUN << endl;
  cout << "A new " << ADJECTIVE2 << " point of view" << endl;
  cout << "No one to tell us \"" << COMMAND << "\"" << endl;
  cout << "Or " << QUESTION << " to " << VERB << endl;
  cout << "Or say we're only " << VERBING << endl;
  cout << endl;
  cout << "A whole " << ADJECTIVE1 << " " << NOUN << endl;
  cout << "A " << ADJECTIVE3 << " place I never knew" << endl;
  cout << "But now from way " << PREPOSITION << " here" << endl;
  cout << "It's crystal clear" << endl;
  cout << "that now I'm in a whole " << ADJECTIVE1 << " " << NOUN;
  cout << " with you." << endl;

  return 0;
}
