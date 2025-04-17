#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n(0);
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;

    cout << month[n-1];
    return 0;
}