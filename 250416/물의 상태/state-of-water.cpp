#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int tmp(0);
    string water;
    cin >> tmp;

    if (tmp < 0) 
        water = "ice";
    else if (tmp >= 100)
        water = "vapor";
    else
        water = "water";

    cout << water;
    
    return 0;
}