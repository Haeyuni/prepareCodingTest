#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mid(0), last(0);

    cin >> mid >> last;

    if (mid >= 90) {
        if (last >= 95)
            cout << 100000;
        else if (last >= 90)
            cout << 50000;
        else    
            cout << 0;
    }
    else 
        cout << 0;
        
    return 0;
}