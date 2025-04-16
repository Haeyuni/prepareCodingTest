#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.
    int h(0), w(0), b(0);

    cin >> h >> w;

    b = (10000 * w) / pow(h, 2);
    
    cout << b << endl;
    if (b >= 25)
        cout << "Obesity";

    return 0;
}