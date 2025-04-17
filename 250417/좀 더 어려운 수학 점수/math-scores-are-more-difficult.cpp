#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int aMath(0), aEng(0), bMath(0), bEng(0);

    cin >> aMath >> aEng >> bMath >> bEng;

    if (aMath != bMath) {
        if (aMath > bMath)
            cout << 'A';
        else
            cout << 'B';
    } else {
        if (aEng > bEng)
            cout << 'A';
        else    
            cout << 'B';
    }

    return 0;
}