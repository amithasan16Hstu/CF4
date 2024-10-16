#include <bits/stdc++.h>
using namespace std;

struct Interval {
    int l, r;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, m;
       cin >> n >> s >> m;

        vector<Interval> tasks(n);

        for (int i = 0; i < n; ++i) {
            cin >> tasks[i].l >> tasks[i].r;
        }

        
      sort(tasks.begin(), tasks.end(), [](const Interval& a, const Interval& b) {
            return a.l < b.l;
        });

        
        if (tasks[0].l >= s) {
            cout << "YES" << endl;
            continue;
        }

        bool canShower = false;

        
        for (int i = 1; i < n; ++i) {
            if (tasks[i].l - tasks[i-1].r >= s) {
                canShower = true;
                break;
            }
        }

        
        if (m - tasks[n-1].r >= s) {
            canShower = true;
        }

        if (canShower) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
