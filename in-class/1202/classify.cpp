#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  ostringstream zeroRemainder;
  ostringstream oneRemainder;
  ostringstream twoRemainder;
  int variable;
  cout << "Enter a list of integers to classify. A negative number quits."
       << endl;
  do {
    cin >> variable;
     if (variable < 0){
      break;
     } else if ( variable % 3 == 0){
zeroRemainder << number << " ";
     }else if ( variable % 3 == 0){
oneRemainder << number << " ";
     }else if ( variable % 3 == 0){
twoRemainder << number << " ";
     }

  } while (true);
  do {
    cout << "Number w/ Remainders " << ++count << ": ";
    cout << variable % 3;
   
  } while (variable % 3 > 0);
}
