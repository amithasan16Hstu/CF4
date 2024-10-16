#include <bits/stdc++.h>
using namespace std;

void constructPermutation(int N) {
    vector<int> permutation(N);
    int left = 1, right = N;
    bool toggle = true;
    for (int i = 0; i < N; ++i) {
        if (toggle) {
            permutation[i] = left++;
        } else {
            permutation[i] = right--;
        }
        toggle = !toggle;
    }
    for (int i = 0; i < N; ++i) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        constructPermutation(N);
    }
    return 0;
}
