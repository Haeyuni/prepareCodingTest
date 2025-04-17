#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sex(0), age(0);

    cin >> sex >> age;

    if (sex) {
        age >= 19 ? cout << "WOMAN" : cout << "GIRL";
    } else {
        age >= 19 ? cout << "MAN" : cout << "BOY";
    }
    return 0;
}