#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a(0), b(0);
    char c(' ');

    cin >> c >> a >> b;

    cout << fixed;
    cout.precision(2);

    cout << c << endl << a << endl << b;
    return 0;
}