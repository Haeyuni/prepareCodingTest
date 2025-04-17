#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(0);
    cin >> a;

    a % 13 == 0 || a % 19 == 0 ? cout << "True" : cout << "False";
    return 0;
}