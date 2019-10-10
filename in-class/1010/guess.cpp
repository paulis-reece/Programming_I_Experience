#include <ctime>   // form time command to use for random seed
#include <iostream>
using namespace std;

int main() {
int guess1, guess2, guess3;
bool correctGuess = false;
  // pick a random number between 1 and 10
  srand(time(0));
  int random = rand() % 10 + 1;

  // prompt for the user guesses
  cout << "I'm thinking of a number between 1 and 10." << endl;
  cout << "You have three guesses: ";
  cin >> guess1 >> guess2 >> guess3;
  cout << endl;

  // set a flag based on comparing the guesses with our number
  if (random == guess1) {
      correctGuess = true;
  }
if (random == guess2) {
    correctGuess = true;
}
if(random == guess3) {
    correctGuess = true;
}
  // respond to the user
  if(correctGuess){
      cout << "You are correct! ";
  } else {
      cout << "You did not guess my number: ";
  }

  return 0;
}
