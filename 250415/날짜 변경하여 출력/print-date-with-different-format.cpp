#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int year(0), month(0), day(0);

    cin >> year;
    cin.get();
    cin >> month;
    cin.get();
    cin >> day;

    cout << month << "-" << day << "-" << year;
    return 0;
}