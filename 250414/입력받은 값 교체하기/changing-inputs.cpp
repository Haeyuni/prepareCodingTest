#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(0), b(0), temp(0);
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;
    return 0;
}