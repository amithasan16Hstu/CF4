#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    
    int diff = abs(X - Y);

    
    if ((diff <= 2 && X < Y) || (diff <= 3 && X > Y)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
