#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x(0), y(0), front(0);
    char dash(' ');

    cin >> front >> dash >> x >> dash >> y;

    cout << "010" << dash << y << dash << x;
    return 0;
}