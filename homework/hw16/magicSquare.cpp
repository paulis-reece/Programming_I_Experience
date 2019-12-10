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
  int storageRow = 0;
  int storageRow2 = 0;
  int storageRow3 = 0;
  int storeCol = 0;
  int storeCol2 = 0;
  int storeCol3 = 0;
  int r1c1 = 0;
  int r2c2 = 0;
  int r3c3 = 0;
  int r3c1 = 0;
  int r1c3 = 0;
  int r1c2 = 0;
  int r2c1 = 0;
  int r2c3 = 0;
  int r3c2 = 0;
  int store = 0;
  int store2 = 0;
  int counter = 0;
  int comparisonArray[rows][SIZE];
  bool loShuMagicSquare;
  vector<int> shape(SIZE);
  vector<int> shaping(rows);
  if (shape.size() != shaping.size()) {
    loShuMagicSquare = false;
    return loShuMagicSquare;
  } else {
    for (int r = 1; r <= SIZE; r++) {
      for (int c = 1; c <= SIZE; c++) {
        if (array[r][c] == array[1][1] || array[r][c] == array[1][2] ||
            array[r][c] == array[1][3] || array[r][c] == array[2][1] ||
            array[r][c] == array[2][2] || array[r][c] == array[2][3] ||
            array[r][c] == array[3][1] || array[r][c] == array[3][2] ||
            array[r][c] == array[3][3]) {
          counter++;
        }
        if (r == 1) {
          storageRow += array[r][c];
        }
        if (c == 1) {
          storeCol += array[r][c];
        }
        if (r == 2) {
          storageRow2 += array[r][c];
        }
        if (c == 2) {
          storeCol2 += array[r][c];
        }
        if (r == 3) {
          storageRow3 += array[r][c];
        }
        if (c == 3) {
          storeCol3 += array[r][c];
        }
        if (r == 1 && c == 1) {
          r1c1 = array[r][c];
        }
        if (r == 2 && c == 2) {
          r2c2 = array[r][c];
        }
        if (r == 3 && c == 3) {
          r3c3 = array[r][c];
        }
        if (r == 3 && c == 1) {
          r3c1 = array[r][c];
        }
        if (r == 1 && c == 3) {
          r1c3 = array[r][c];
        }
        if (r == 1 && c == 2) {
          r1c2 = array[r][c];
        }
        if (r == 2 && c == 1) {
          r2c1 = array[r][c];
        }
        if (r == 2 && c == 3) {
          r2c3 = array[r][c];
        }
        if (r == 3 && c == 2) {
          r3c2 = array[r][c];
        }
      }
    }
    store = r1c1 + r2c2 + r3c3;
    store2 = r3c1 + r2c2 + r1c3;
    if (counter == 9) {
      loShuMagicSquare = true;
    } else {
      loShuMagicSquare = false;
    }
    if (storageRow == storageRow2 && storageRow == storageRow3 &&
        storageRow2 == storageRow3) {
      if (storeCol == storeCol2 && storeCol == storeCol3 &&
          storeCol2 == storeCol3) {
        if (store == store2) {
          if (storageRow == storeCol && storageRow == store &&
              storeCol == store) {
            return loShuMagicSquare = true;
          }
        }
      }
    } else {
      return loShuMagicSquare = false;
    }
  }
  return loShuMagicSquare;
}