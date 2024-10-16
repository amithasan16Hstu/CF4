#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (k == 0) {
            cout << 0 << endl;
            continue;
        }
        
        // Calculate the number of minimum occupied diagonals
        int diagonals = min(k / n + (k % n != 0), 2 * n - 1);
        
        cout << diagonals << endl;
    }
    
    return 0;
}
