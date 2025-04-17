#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    string cold[3];
    int tem[3] = {0};
    int cnt(0);

    for (int i=0; i<3; i++) {
        cin >> cold[i] >> tem[i];
    } 

    for (int i=0; i<3; i++) {
        if(cold[i]=="Y" && tem[i] >= 37)
            cnt++;
    } 

    if (cnt >= 2)
        cout << "E";
    else
        cout << "N";

    return 0;
}