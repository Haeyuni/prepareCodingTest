#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(0), b(0), c(0), min(0);

    cin >> a >> b >> c;

    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    cout << min;
    return 0;
}