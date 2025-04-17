#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int aAge(0), bAge(0);
    char aSex(' '), bSex(' ');

    cin >> aAge >> aSex >> bAge >> bSex;

    cout << ((aAge >= 19 && aSex == 'M') || (bAge >= 19 && bSex == 'M'));
    return 0;
}