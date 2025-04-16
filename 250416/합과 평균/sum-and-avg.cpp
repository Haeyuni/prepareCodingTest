#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(0), b(0);
    cin >> a >> b;
    cout << fixed;
    cout.precision(1);
    int sum = a + b;
    cout << sum << " " << sum / 2.0;
    return 0;
}