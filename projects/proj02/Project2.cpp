
#include <iomanip>  // for format output
#include <iostream> // for cout and cin
#include <vector>   // for vectors
using namespace std;
int Value(char roman) {
  switch (roman) {
  case 'I' :
    return 1;
    break;
  case 'V':
    return 5;
    break;
  case 'X':
    return 10;
    break;
  case 'L':
    return 50;
    break;
  case 'C':
    return 100;
    break;
}
}

/*int romanToInt(string roman1) {
  int i;
  int FirstIndex;
  int ans;
  int previousVal;
  ans = 0;
  previousVal = 0;
  FirstIndex = roman1.at(0);
  for (i = 0; i <= roman1.length() - 1; i++) {
    if (Value(roman1.at(i)) >= previousVal) {
      ans = ans + Value(roman1.at(i));
    } else {
      ans = ans - Value(roman1.at(i));
    }
    previousVal = Value(roman1.at(i));
  }
  return ans;
}*/

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