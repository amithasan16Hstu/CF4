#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

// Precompute factorial and inverse factorials for combination calculations
const int MAX = 1e6 + 5;
vector<long long> fact(MAX), invFact(MAX);

long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void precompute() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < MAX; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invFact[MAX - 1] = modPow(fact[MAX - 1], MOD - 2, MOD);
    for (int i = MAX - 2; i >= 0; --i) {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
}

long long comb(int n, int k) {
    if (k > n || k < 0) return 0;
    return fact[n] * invFact[k] % MOD * invFact[n - k] % MOD;
}

long long countGoodSets(int N, int M) {
    if (N < 3) return 0;
    if (M < N) return 0;

    long long totalSets = comb(M, N);

    long long invalidSets = 0;
    for (int i = 1; i <= M; ++i) {
        for (int j = i + 1; j <= M; ++j) {
            for (int k = j + 1; k <= M; ++k) {
                if (i + j > k) {
                    invalidSets = (invalidSets + comb(M - 3, N - 3)) % MOD;
                }
            }
        }
    }

    return (totalSets - invalidSets + MOD) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;

        cout << countGoodSets(N, M) << endl;
    }

    return 0;
}
