
#include <iostream>
#include "factorialFunction.h"
using namespace std;
int main() {

    int n = 0;
    cout << "Enter a number n: ";
    cin >> n;

    long val = factorial(n);
    cout << n << "! = " << val << endl;

    return 0;
}


