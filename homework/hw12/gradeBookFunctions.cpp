/****************************************************************************
 *
 * hw12:  Functions for tracking quiz grades in CPTR 141
 *
 * File Name:  gradeBookFunctions.h
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include <vector>
#include <string>
#include <iostream>
#include "gradeBookFunctions.h"
using namespace std;


/*=====================================================================
 * DECLARE AND INITALIZE GLOBALS HERE
 */


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
}
