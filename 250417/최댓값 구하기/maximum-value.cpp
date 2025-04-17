#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a(0), b(0), c(0), max(0);

    cin >> a >> b >> c;

    if (a >= b && a>= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else    
        max = c;

    cout << max; 
    
    return 0;
}