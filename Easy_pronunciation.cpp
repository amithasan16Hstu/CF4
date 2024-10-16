#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string Pronounce( string s) {
    int consonantCount = 0;
    
    for (char c : s) {
        if (!isVowel(c)) {
            consonantCount++;
            if (consonantCount >= 4) {
                return "NO";
            }
        } else {
            consonantCount = 0;
        }
    }
    
    return "YES";
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        
        cout << Pronounce(S) << endl;
    }
    
    return 0;
}
