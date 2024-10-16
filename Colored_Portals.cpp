#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<string> cities(n);
        vector<vector<int>> color_positions(4);

        
        for (int i = 0; i < n; i++) {
            cin >> cities[i];
            for (char c : cities[i]) {
                if (c == 'B') color_positions[0].push_back(i);
                else if (c == 'G') color_positions[1].push_back(i);
                else if (c == 'R') color_positions[2].push_back(i);
                else if (c == 'Y') color_positions[3].push_back(i);
            }
        }

        
        while (q--) {
            int x, y;
            cin >> x >> y;
            x--; y--;  

            if (x == y) {
                cout << 0 << '\n';
                continue;
            }

            
            vector<int> dist(n, INF);
            queue<int> q;
            q.push(x);
            dist[x] = 0;

            bool found = false;
            while (!q.empty()) {
                int current = q.front();
                q.pop();

                for (char c : cities[current]) {
                    int color_index = (c == 'B' ? 0 : c == 'G' ? 1 : c == 'R' ? 2 : 3);
                    for (int neighbor : color_positions[color_index]) {
                        if (neighbor != current && dist[neighbor] == INF) {
                            dist[neighbor] = dist[current] + abs(neighbor - current);
                            if (neighbor == y) {
                                found = true;
                                break;
                            }
                            q.push(neighbor);
                        }
                    }
                    if (found) break;
                }
                if (found) break;
            }

            if (dist[y] == INF) cout << -1 << '\n';
            else cout << dist[y] << '\n';
        }
    }
    
    return 0;
}
