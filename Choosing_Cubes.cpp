#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int favorite_value = a[f - 1];
        
        sort(a.rbegin(), a.rend());  

        int count_fav_in_top_k = 0;
        int count_fav_total = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == favorite_value) {
                if (i < k) count_fav_in_top_k++;
                count_fav_total++;
            }
        }

        if (count_fav_in_top_k == count_fav_total) {
            cout << "YES" << endl;
        } else if (count_fav_in_top_k > 0) {
            cout << "MAYBE" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
