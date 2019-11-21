/****************************************************************************
 *
 * hw12:  Functions for tracking quiz grades in CPTR 141
 *
 * File Name:  gradeBookFunctions.h
 * Name:       Reece Reklai
 * Course:     CPTR 141
 *
 */

#include "gradeBookFunctions.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*=====================================================================
 * DECLARE AND INITALIZE GLOBALS HERE
 */
extern const int NUM_QUIZZES = 8;
extern vector<char> quizScores(NUM_QUIZZES);

extern const int MIN_PASS_FOR_A = 8;
extern const int MIN_E_FOR_A = 4;
extern const int MIN_PASS_FOR_B = 7;
extern const int MIN_E_FOR_B = 2;
extern const int MIN_PASS_FOR_C = 5;
extern const int MIN_PASS_FOR_D = 4;

/*=====================================================================
 * FUNCTION: getScore(string message)
 *   Prompts for a new quiz score using the string "message" and
 *   validates it before storing it in the global "quizScores" vector.
 *   Also makes sure that we have no more than NUM_QUIZZES quiz scores.
 *    - Precondition: none
 *    - Postcondition: returns false if the score vector is full (already
 *      at NUM_QUIZZES) or an invalid grade is entered, otherwise an E,
 *      M, R, or N is pushed onto "quizScores" and true is returned
 */
bool getScore(string message) {
  bool check;
  do {
    if (quizScores.size() != 8) {
      quizScores.push_back(message.length());
      check = true;
    } else {
      check = false;
    }
    cout << "Grade :";
    cin >> message;
  } while (quizScores.size() != 8);
  if (check == false) {
    quizScores.size();
    return check;
  } else {
    return check;
  }
}

/*=====================================================================
 * FUNCTION: calcGrade()
 *   Calculates and returns the letter grade ('A', 'B', 'C', 'D', or
 *   'F') from the global vector of homework scores as defined by the
 *   global constants: MIN_PASS_FOR_A, MIN_PASS_FOR_B, MIN_PASS_FOR_C,
 *   MIN_PASS_FOR_D, MIN_E_FOR_A, and MIN_E_FOR_B.
 *     - Precondition: the global "quizScores" vector must have at least
 *       one entry
 *     - Post condition: the correct grade letter is returned
 */
char calcGrade() {
  int countE = 0;
  int countM = 0;
  int countR = 0;
  int countN = 0;
  int combineEM = 0;
  int combineEMR = 0;
  for (int i = 0; i < quizScores.size(); i++) {
    if (quizScores.at(i) == 'E') {
      countE += 1;
    }
    if (quizScores.at(i) == 'M') {
      countM += 1;
    }
    if (quizScores.at(i) == 'R') {
      countR += 1;
    }
    if (quizScores.at(i) == 'N') {
      countN += 1;
    }
  }
  combineEM = countE + countM;
  combineEMR = countE + countM + countR;
  if (combineEM == MIN_PASS_FOR_A) {
    return 'A';
  } else if (countE == MIN_E_FOR_A) {
    return 'A';
  } else if (combineEM == MIN_E_FOR_B) {
    return 'B';
  } else if (combineEM == MIN_PASS_FOR_C) {
    return 'C';
  } else if (combineEM == MIN_PASS_FOR_D) {
    return 'D';
  } else {
    return 'F';
  }
}

/*=====================================================================
 * FUNCTION: changeScore(int index, char newScore)
 *   Updates quizScores at the given index to a newScore if the newScore
 *   is valid (E, M, R, or N) and better than the current score.
 *     - Precondition: the global "quizScores" vector must have an entry at
 *       the given index
 *     - Postcondition: if newScore is valid and higher, the entry in the
 *       global "quizScores" will be updated and true returned, otherwise
 *       false is returned
 */
bool changeScore(int index, char newScore) {
  char swap;
  bool SWAP;
  for (int i = 0; i < NUM_QUIZZES; i++) {
    if (quizScores.at(index) > newScore) {
      quizScores.at(index) = newScore;
      SWAP = true;
    } else {
      SWAP = false;
    }
  }
  return SWAP;
}