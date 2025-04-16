#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n(0), extent(0);
    cin >> n;
    extent = n * n;
    cout << extent << endl;
    if (n < 5)
        cout << "tiny";
    return 0;
}