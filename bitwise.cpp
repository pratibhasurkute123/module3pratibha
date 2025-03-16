#include <iostream>
using namespace std;

int main() {
    int a = 7; //  0111
    int b = 4; //  0100

    // Bitwise AND
    int bitwise_and = a & b;

    // Bitwise OR
    int bitwise_or = a | b;

   cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    
    return 0;
}
