#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int countSubsequence(string &s, string seq) {
    int m = seq.length();
    vector<int> dp(m + 1, 0);
    dp[0] = 1; // Empty subsequence count

    for (char c : s) {
        for (int j = m - 1; j >= 0; --j) {
            if (seq[j] == c) {
                dp[j + 1] += dp[j];
            }
        }
    }
    return dp[m];
}

int minLengthAfterOperations(int N, string S) {
    int countBack = countSubsequence(S, "back");
    int countFront = countSubsequence(S, "front");
    
    // Each "back" operation reduces length by 3, and each "front" operation reduces length by 4
    int lengthAfterBackOps = N - 3 * countBack;
    int lengthAfterFrontOps = N - 4 * countFront;
    
    // The minimum length is obtained by the maximum feasible operations
    int result = max(lengthAfterBackOps, lengthAfterFrontOps);
    
    return result;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        cout << minLengthAfterOperations(N, S) << endl;
    }
    
    return 0;
}
