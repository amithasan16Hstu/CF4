#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int X;
        cin >> X;  
        string directions[] = {"North", "East", "South", "West"};

        int directionIndex = X % 4;

        cout << directions[directionIndex] << endl;
    }

    return 0;
}
