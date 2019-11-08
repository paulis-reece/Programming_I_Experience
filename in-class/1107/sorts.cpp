#include <iostream>
#include <string>
using namespace std;

// sort functions
void sortThree(int &x, int &y, int &z);
void sortThree(double &x, double &y, double &z);
void sortThree(string &x, string &y, string &z);
void sortFour(int x, int y, int z, int a=0);

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
void sortThree(double &x, double &y, double &z) {
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
void sortThree(string &x, string &y, string &z) {
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
void sortFour(int &x, int &y, int &z, int a=0) {
  if (x > y) {
    swap(x, y);
  }
  if (y > z) {
    swap(y, z);
  }
  if (x > y) {
    swap(x, y);
  }
  if (z > a){
      swap(z, a);
  }
}


// supporting swap functions
void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}
