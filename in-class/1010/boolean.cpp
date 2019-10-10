/*************************************************************************
 *
 * In-Class Exercise:  This program gives us the results of various
 *                     combinatons of boolean and relational operators.
 *
 * File Name: boolean.cpp
 * Username:  Reece Reklai
 * Username:  ?
 * Course:    CPTR 141
 * Date:      @@date@@
 *
 */

#include <iostream>
using namespace std;

int main() {



    // part 1 -- find the values of the given Boolean expressions
   if (0 == 0 && 10 < 20) {
       cout << true << endl;
   }
    if ((10 > 20) || ( 0 < 5))
    {
        cout << true << endl;
    }
    if((!10) == 0 + 1) {
        cout << false << endl;
    }
   if (( 10 < 7) || ( 10 / 20)) {
       cout << "error" << endl;
   }
   if ((0 == 2) && 10 < 20) {
       cout << false << endl;
   }



    // part 2 -- find the values of the given Boolean expressions with
    // relational operators
    int limit = 10;
    int count = 0;

    return 0;
}
