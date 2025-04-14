#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(5), b(6), c(7), temp1(0), temp2(0);
    temp1 = a;
    temp2 = b;
    b = a;
    a = c;
    c = temp2;

    cout << a << endl << b << endl << c;
    return 0;
}