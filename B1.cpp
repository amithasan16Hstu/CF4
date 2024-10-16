#include <bits/stdc++.h>
using namespace std;

bool canHaveSameScore(int A, int B, int C, int M) {
    int max_score = max({A, B, C});
    int total_points = A + B + C + M;

    for (int i = 0; i <= M; ++i) {
        for (int j = 0; j <= M - i; ++j) {
            int k = M - i - j;
            int newA = A + i;
            int newB = B + j;
            int newC = C + k;

            if ((newA == newB) || (newA == newC) || (newB == newC)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, M;
        cin >> A >> B >> C >> M;

        if (canHaveSameScore(A, B, C, M)) {
            cout << "YES" << endl;
        } else {
         cout<<"NO"<<endl;
        }
    }
}
