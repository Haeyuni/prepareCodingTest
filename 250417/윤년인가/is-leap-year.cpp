#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int year(0);
    cin >> year;

    if ((year % 4 != 0) || (year % 100 == 0 && year % 400 !=0))
        cout << "false";
    else
        cout << "true";
    return 0;
}