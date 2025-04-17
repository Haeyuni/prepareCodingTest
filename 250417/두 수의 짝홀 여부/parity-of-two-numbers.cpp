#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(0), b(0);
    
    cin >> a >> b;

    if (a % 2==0)
        cout << "even";
    else
        cout << "odd";

    cout << endl;
    b % 2==0 ? cout << "even" : cout << "odd";
    return 0;
}