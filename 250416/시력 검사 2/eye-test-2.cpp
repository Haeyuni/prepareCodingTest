#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    float average(0);
    string word;

    cin >> average;

    if (average >= 1.0)
        word = "High";
    else if (average >= 0.5)
        word = "Middle";
    else   
        word = "Low";

    cout << word;

    return 0;
}