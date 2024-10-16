#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N;
        cin >> N;  

        vector<int> S(N), D(N);

       
        for (int i = 0; i < N; i++) {
            cin >> S[i];
        }

        
        for (int i = 0; i < N; i++) {
            cin >> D[i];
        }
        int Count = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == D[i]) {
                Count++;
            }
        }

       
        cout << Count << endl;
    }

    return 0;
}
