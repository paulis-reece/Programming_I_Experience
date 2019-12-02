/****************************************************************************
 *
 * hw16: Checking for Lo Shu Magic Squares
 *
 * File Name: magicSquare.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include "magicSquare.h"
#include <cassert>

bool isLoShu(int array[][SIZE], int rows){
assert(rows == 3);
int comparisonArray[3][3];
bool loShuMagicSquare;
if(array !=  comparisonArray){
loShuMagicSquare = false;
return loShuMagicSquare;
} else {
for(int i = 1; i <= SIZE; i++){
   if (array[0][0] == array[0][i - 1] && array[1][i - 1] && ){
       loShuMagicSquare = false;
       return loShuMagicSquare;
   } else if (array[1][i] == array[1][i - 1]){
       loShuMagicSquare = false;
       return loShuMagicSquare;
   } else if (array[2][i] == array[2][i - 1]){
       loShuMagicSquare = false;
       return loShuMagicSquare;
   }
}
}
}