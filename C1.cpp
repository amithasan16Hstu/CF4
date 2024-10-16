#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the maximum number of matches each player can win
vector<int> maxMatchesWon(vector<int>& skills) {
    int n = skills.size();
    vector<int> wins(n, 0);

    // Sort players by their skill levels
    vector<pair<int, int>> players(n);
    for (int i = 0; i < n; ++i) {
        players[i] = {skills[i], i};
    }
    sort(players.begin(), players.end());

    // Players with higher skill levels win more matches
    for (int i = 0; i < n; ++i) {
        wins[players[i].second] = min(i, 4); // 4 is the maximum number of matches a player can win in a 16 player tournament
    }

    return wins;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<int> skills(16);
        for (int i = 0; i < 16; ++i) {
            cin >> skills[i];
        }

        vector<int> result = maxMatchesWon(skills);
        for (int i = 0; i < 16; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
