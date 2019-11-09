
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <vector>   // for vectors
using namespace std;

// Change individual characters to values
int Value(string roman) {
  int remainders = 0;
  int placeholder = 0;
  int counter = true;
  int iliteration = 0;
  vector<int> numVec(roman.length());
  // Creates the string characters into Value elements
  for (int i = 0; i < roman.length(); i++) {
    switch (roman.at(i)) {
    case 'I':
      numVec.at((i)) = 1;
      break;
    case 'V':
      numVec.at((i)) = 5;
      break;
    case 'X':
      numVec.at((i)) = 10;
      break;
    case 'L':
      numVec.at(i) = 50;
      break;
    case 'C':
      numVec.at(i) = 100;
      break;
    case 'D':
      numVec.at(i) = 500;
      break;
    case 'M':
      numVec.at(i) = 1000;
      break;
    }
  }
  //  Performing Subtraction Rule for the Roman Numeral values
  for (int j = 0; j < numVec.size() - 1; j++) {
    if (numVec.at(j) < numVec.at(j + 1)) {
      counter = false;
      placeholder = numVec.at(j + 1) - numVec.at(j) + placeholder;
    } else {
      remainders += numVec.at(j);
    }
    iliteration += j;
  }
  if (numVec.size() == 1) {
    placeholder = placeholder + numVec.size();
    return placeholder;
  } else if (counter == true) {
    placeholder = placeholder + remainders;
    return placeholder;
  } else if (iliteration % 2 == 0) {
    return placeholder;
  } else if (iliteration % 2 == 1) {
    placeholder = placeholder + abs((remainders - placeholder));
    return placeholder;
  }
  return placeholder;
}

// Make Integers to Roman
string intToRoman(int result) {
  string ans;
  int finalM;
  int finalD;
  int finalC;
  int finalL;
  int finalX;
  int finalV;
  int finalI;
  int M;
  int D;
  int C;
  int L;
  int X;
  int V;
  int I;

  // Change each Number to the according letter if result is over 1000
  if (result >= 1000) {
    finalM = result / 1000;
    M = finalM;
    finalM = result % 1000;
    D = finalM / 500;
    finalD = result % 1000 % 500;
    finalC = finalD / 100;
    C = finalC;
    finalC = result % 1000 % 500 % 100;
    finalL = finalC / 50;
    L = finalL;
    finalL = result % 1000 % 500 % 100 % 50;
    finalX = finalL / 10;
    X = finalX;
    finalX = result % 1000 % 500 % 100 % 50 % 10;
    finalV = finalX / 5;
    V = finalV;
    finalV = result % 1000 % 500 % 100 % 50 % 10 % 5;
    finalI = finalV / 1;
    I = finalI;
    // Change each Number to the according letter if result is over 500
  } else if (result >= 500) {
    D = result / 500;
    finalD = result % 500;
    finalC = finalD / 100;
    C = finalC;
    finalC = result % 500 % 100;
    finalL = finalC / 50;
    L = finalL;
    finalL = result % 500 % 100 % 50;
    finalX = finalL / 10;
    X = finalX;
    finalX = result % 500 % 100 % 50 % 10;
    finalV = finalX / 5;
    V = finalV;
    finalV = result % 500 % 100 % 50 % 10 % 5;
    finalI = finalV / 1;
    I = finalI;
    // Change each Number to the according letter if result is over 100
  } else if (result >= 100) {
    finalC = result / 100;
    C = finalC;
    finalC = result % 100;
    finalL = finalC / 50;
    L = finalL;
    finalL = result % 100 % 50;
    finalX = finalL / 10;
    X = finalX;
    finalX = result % 100 % 50 % 10;
    finalV = finalX / 5;
    V = finalV;
    finalV = result % 100 % 50 % 10 % 5;
    finalI = finalV / 1;
    I = finalI;
    // Change each Number to the according letter if result is over 50
  } else if (result >= 50) {
    finalL = result / 50;
    L = finalL;
    finalL = result % 50;
    finalX = finalL / 10;
    X = finalX;
    finalX = result % 50 % 10;
    finalV = finalX / 5;
    V = finalV;
    finalV = result % 50 % 10 % 5;
    finalI = finalV / 1;
    I = finalI;
    // Change each Number to the according letter if result is over 10
  } else if (result >= 10) {
    finalX = result / 10;
    X = finalX;
    finalX = result % 10;
    finalV = finalX / 5;
    V = finalV;
    finalV = result % 10 % 5;
    finalI = finalV / 1;
    I = finalI;
    // Change each Number to the according letter if result is over 5
  } else if (result >= 5) {
    finalV = result / 5;
    V = finalV;
    finalV = result % 5;
    finalI = finalV / 1;
    I = finalI;
    // Change each Number to the according letter if result is over 0
  } else if (result > 0) {
    finalI = result / 1;
    I = finalI;
  }
  // Using the values above to convert back to Roman Numeral if result over 1000
  if (result >= 1000) {
    if (M > 0) {
      for (int i = 0; i < M; i++) {
        ans += 'M';
      }
    }
    if (D > 0) {
      for (int i = 0; i < D; i++) {
        ans += 'D';
      }
    }
    if (C > 0) {
      for (int i = 0; i < C; i++) {
        ans += 'C';
      }
    }
    if (L > 0) {
      for (int i = 0; i < L; i++) {
        ans += 'L';
      }
    }
    if (X > 0) {
      for (int i = 0; i < X; i++) {
        ans += 'X';
      }
    }
    if (V > 0) {
      for (int i = 0; i < V; i++) {
        ans += 'V';
      }
    }
    if (I > 0) {
      for (int i = 0; i < I; i++) {
        ans += 'I';
      }
    }
    // Using the values above to convert back to Roman Numeral if result over
    // 500
  } else if (result >= 500) {
    if (D > 0) {
      for (int i = 0; i < D; i++) {
        ans += 'D';
      }
    }
    if (C > 0) {
      for (int i = 0; i < C; i++) {
        ans += 'C';
      }
    }
    if (L > 0) {
      for (int i = 0; i < L; i++) {
        ans += 'L';
      }
    }
    if (X > 0) {
      for (int i = 0; i < X; i++) {
        ans += 'X';
      }
    }
    if (V > 0) {
      for (int i = 0; i < V; i++) {
        ans += 'V';
      }
    }
    if (I > 0) {
      for (int i = 0; i < I; i++) {
        ans += 'I';
      }
    }
    // Using the values above to convert back to Roman Numeral if result over
    // 100
  } else if (result >= 100) {
    if (C > 0) {
      for (int i = 0; i < C; i++) {
        ans += 'C';
      }
    }
    if (L > 0) {
      for (int i = 0; i < L; i++) {
        ans += 'L';
      }
    }
    if (X > 0) {
      for (int i = 0; i < X; i++) {
        ans += 'X';
      }
    }
    if (V > 0) {
      for (int i = 0; i < V; i++) {
        ans += 'V';
      }
    }
    if (I > 0) {
      for (int i = 0; i < I; i++) {
        ans += 'I';
      }
    }
    // Using the values above to convert back to Roman Numeral if result over 50
  } else if (result >= 50) {
    if (L > 0) {
      for (int i = 0; i < L; i++) {
        ans += 'L';
      }
    }
    if (X > 0) {
      for (int i = 0; i < X; i++) {
        ans += 'X';
      }
    }
    if (V > 0) {
      for (int i = 0; i < V; i++) {
        ans += 'V';
      }
    }
    if (I > 0) {
      for (int i = 0; i < I; i++) {
        ans += 'I';
      }
    }
    // Using the values above to convert back to Roman Numeral if result over 10
  } else if (result >= 10) {
    if (X > 0) {
      for (int i = 0; i < X; i++) {
        ans += 'X';
      }
    }
    if (V > 0) {
      for (int i = 0; i < V; i++) {
        ans += 'V';
      }
    }
    if (I > 0) {
      for (int i = 0; i < I; i++) {
        ans += 'I';
      }
    }
    // Using the values above to convert back to Roman Numeral if result over 5
  } else if (result >= 5) {
    if (V > 0) {
      for (int i = 0; i < V; i++) {
        ans += 'V';
      }
    }
    if (I > 0) {
      for (int i = 0; i < I; i++) {
        ans += 'I';
      }
    }
    // Using the values above to convert back to Roman Numeral if result over 1
  } else if (result >= 1) {
    if (I > 0) {
      for (int i = 0; i < I; i++) {
        ans += 'I';
      }
    }
  }

  return ans;
}

int main() {
  // Value and intToRoman are functions located above

  string rom1;
  string rom2;
  int result;

  cout << "Welcome to the Roman Numeral Calculator!" << endl;
  cout << "----------------------------------------" << endl;

  cout << "Enter Two Roman Numeral Values" << endl;
  cout << "The First Values: ";
  cin >> rom1;
  cout << "The Second Values: ";
  cin >> rom2;
  result = Value(rom1) + Value(rom2);
  cout << "Roman Numeral Result: " << result;
  return 0;
}