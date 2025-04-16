#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(0), b(0), c(0);
    cin >> a >> b >> c;

    int sum = a + b + c;
    int average = sum / 3;

    cout << sum << endl << average << endl << sum - average;
    return 0;
}