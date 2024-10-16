#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int wins = 0;

       
        int suneetRounds[2][2] = {{a1, a2}, {a2, a1}};
        int slavicRounds[2][2] = {{b1, b2}, {b2, b1}};

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int suneetWins = 0;
                int slavicWins = 0;
                if (suneetRounds[i][0] > slavicRounds[j][0]) ++suneetWins;
                if (suneetRounds[i][0] < slavicRounds[j][0]) ++slavicWins;
                if (suneetRounds[i][1] > slavicRounds[j][1]) ++suneetWins;
                if (suneetRounds[i][1] < slavicRounds[j][1]) ++slavicWins;

                if (suneetWins > slavicWins) ++wins;
            }
        }

      cout << wins << endl;
    }

    return 0;
}
