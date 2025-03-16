#include <iostream>
using namespace std;

int main() {
  
    int i = 10;
    char c = 'a';

    // c implicitly converted to int. ASCII
    // value of 'a' is 97
    i = i + c;

    // x is implicitly converted to float
    float f = i + 1.0;

    cout << "i = " << i << endl
         << "c = " << c << endl
         << "f = " << f;

    return 0;
}
