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
#include <vector>

using namespace std;

bool isLoShu(int array[][SIZE], int rows) {
  assert(rows == 3);
  int sumRow1 = 0;
  int sumRow2 = 0;
  int sumRow3 = 0;
  int sumCol1 = 0;
  int sumCol2 = 0;
  int sumCol3 = 0;
  int sumCross1 = 0;
  int sumCross2 = 0;

  sumRow1 += array[0][0] + array[0][1] + array[0][2];
  sumRow2 += array[1][0] + array[1][1] + array[1][2];
  sumRow3 += array[2][0] + array[2][1] + array[2][2];
  sumCol1 += array[0][0] + array[1][0] + array[2][0];
  sumCol2 += array[0][1] + array[1][1] + array[2][1];
  sumCol3 += array[0][2] + array[1][2] + array[2][2];
  sumCross1 = array[0][0] + array[1][1] + array[2][2];
  sumCross2 = array[2][0] + array[1][1] + array[0][2];

  if (sumRow1 == 15 && sumRow2 == 15 && sumRow3 == 15 && sumCol1 == 15 &&
      sumCol2 == 15 && sumCol3 == 15 && sumCross1 == 15 && sumCross2 == 15) {
    return true;
  } else {
    return false;
  }
}