#include <iostream>
#include <string>
using namespace std;

// sort functions
void sortThree(int &x, int &y, int &z);

// supporting swap functions
void swap(int &x, int &y);

// the main program
int main() {

  int a1 = 3, b1 = 1, c1 = 2;
  sortThree(a1, b1, c1);
  cout << "Sorted: " << a1 << ", " << b1 << ", " << c1 << endl;

  double a2 = 7.2, b2 = 9.6, c2 = 3.5;
  sortThree(a2, b2, c2);
  cout << "Sorted: " << a2 << ", " << b2 << ", " << c2 << endl;

  string a3 = "Laura", b3 = "William", c3 = "Jon";
  sortThree(a3, b3, c3);
  cout << "Sorted: " << a3 << ", " << b3 << ", " << c3 << endl;
}

// function definitions
void sortThree(int &x, int &y, int &z) {
  if (x > y) {
    swap(x, y);
  }
  if (y > z) {
    swap(y, z);
  }
  if (x > y) {
    swap(x, y);
  }
}


// supporting swap functions
void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}
