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
  int sum = 0;
  int sum2 = 0;
  bool loShuMagicSquare;
  vector<int> shape(SIZE);
  vector<int> shaping(rows);
  if (shape.size() != shaping.size()) {
    return false;
  } else if (shape.size() == shaping.size()) {
    for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 3; c++) {
         return true;
      }
    }
  }
}