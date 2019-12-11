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
  int counter = 0;
  vector<int> shape(SIZE);
  vector<int> shaping(rows);
  bool factor;
  if (shape.size() != shaping.size()) {
    factor = false;
  } else if (shape.size() == shaping.size()) {
    factor = true;
  }
  for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
      sumRow1 += array[0][c];
      sumRow2 += array[1][c];
      sumRow3 += array[2][c];
      sumCol1 += array[r][0];
      sumCol2 += array[r][1];
      sumCol3 += array[r][2];
      sumCross1 = array[0][0] + array[1][1] + array[2][2];
      sumCross2 = array[2][0] + array[1][1] + array[0][2];
      if (array[r][c] == array[0][0] || array[r][c] == array[0][1] ||
          array[r][c] == array[0][2] || array[r][c] == array[1][0] ||
          array[r][c] == array[1][1] || array[r][c] == array[1][2] ||
          array[r][c] == array[2][0] || array[r][c] == array[2][1] ||
          array[r][c] == array[2][2]) {
        counter++;
      }
    }
  }
  if (counter == 9) {
    if (sumRow1 == sumRow2 && sumRow2 == sumRow3 && sumRow3 == sumCol1 &&
        sumCol1 == sumCol2 && sumCol2 == sumCol3 && sumCol3 == sumCross1 &&
        sumCross1 == sumCross2) {
      factor = true;
    }
  } else {
    factor = false;
  }
  return factor;
}