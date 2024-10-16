#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int stt = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[stt] || s1[i] == '?')
                stt++;
            if (stt >= s2.size())
                break;
        }
        if (stt >= s2.size())
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
        int ytt = 0;
        if (stt >= s2.size())
        {
            for (int k = 0; k < s1.size(); k++)
            {
                if (ytt >= s2.size() && s1[k] == '?')
                    cout << 'a';
                else if (s1[k] == s2[ytt] || s1[k] == '?')
                {
                    cout << s2[ytt];
                    ytt++;
                }
                else
                    cout << s1[k];
            }
            cout << endl;
        }
    }
}