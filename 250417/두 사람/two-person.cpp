#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int aAge(0), bAge(0);
    char aSex(' '), bSex(' ');

    cin >> aAge >> aSex >> bAge >> bSex;

    cout << ((aAge >= 19 || bAge >= 19) && (aSex == 'M' || bSex == 'M'));
    return 0;
}