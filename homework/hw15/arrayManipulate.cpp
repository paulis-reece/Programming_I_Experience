/****************************************************************************
 *
 * Asgn.15:  A library of array functions
 *
 * File Name: arrayManipulate.cpp
 * Name:      Reece Reklai
 * Course:    CPTR 141
 *
 */

#include "arrayManipulate.h"
#include <cassert>
#include <cmath>

void square(int array[], int arrayNum) {
  assert(arrayNum > 0);
  for (int i = 0; i < arrayNum; i++) {
    array[i] = sqrt(array[i]);
  }
}

void divdeBy(int array[], int arrayNum1, int arrayNum2) {
  assert(arrayNum1 > 0 && arrayNum2 > 0);
  for (int i = 0; i < arrayNum1 && i < arrayNum2; i++) {
    array[i] = (array[i] / arrayNum2);
  }
}
void accumulate(int array[], int arrayNum) {
  assert(arrayNum > 0);
  for (int i = 0; i < arrayNum; i++) {
    if (array[i] == array[0]) {
      array[i] += array[i];
    } else {
      array[i] = array[i] + array[i - 1];
    }
  }
}
void reverse(int array[], int arrayNum) {
  assert(arrayNum > 0);
  int counter = 0;
  for (int i = arrayNum; i > 0; i--) {
    array[i] = array[counter];
    counter++;
  }
}
