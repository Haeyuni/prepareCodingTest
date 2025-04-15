#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int width(0), height(0);

    cin >> width >> height;
    width += 8;
    height *= 3;
    cout << width << endl << height << endl << width * height;
    return 0;
}