
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <vector>   // for vectors
using namespace std;
int Value(char roman) {
  switch (roman) {
  case 'I' :
    roman = 1;
    break;
  case 'V':
    roman = 5;
    break;
  case 'X':
    roman = 10;
    break;
  case 'L':
    roman = 50;
    break;
  case 'C':
    roman = 100;
    break;
  }
 return roman;
}

string romanToInt(string rom1) {
  int i;
  int FirstIndex;
  int ans;
  int previousVal;
  ans = 0;
  previousVal = 0;
  FirstIndex = rom1.at(0);
  for (i = FirstIndex; i <= rom1.length() - 1; i++) {
    if (Value(rom1.at(i)) >= previousVal) {
      ans = ans + Value(rom1.at(i));
    } else {
      ans = ans - Value(rom1.at(i));
    }
    previousVal = Value(rom1.at(i));
  }
  rom1 = previousVal;
  return rom1;
}

int main() {
  char rom1;

  cout << "Enter One Roman Numeral Numbers" << endl;
  cout << "First Roman Numeral Values: ";
  cin >> rom1;
  Value(rom1);
  cout << "Your value is: " << rom1 << endl;
  // cout << "Second Roman Numeral Values: ";
  // cin >> rom2;
  // romanNumeral1(rom1);

  return 0;
}