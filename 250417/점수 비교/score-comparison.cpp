#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int aMath(0), aEng(0), bMath(0), bEng(0);

    cin >> aMath >> aEng >> bMath >> bEng;

    cout << (aMath > bMath && aEng > bEng);
    return 0;
}