#include <bits/stdc++.h>
using namespace std;

int main()
{
   int tst;
   cin >> tst;
   while (tst--)
   {
      int L, R;
      cin >> L >> R;
      int x, y;
      cin >> x >> y;
      vector<int> vec(110, 0);
      int dff = min(R, y) - max(L, x);
      if (x < L)
         vec[L - 1] = 1;
      if (L < x)
         vec[x - 1] = 1;
      if (R > y)
         vec[y] = 1;

      if (y > R)
         vec[R] = 1;

      int result = 0;
      for (int i = 1; i <= 101; i++)
      {
         result = result + vec[i];
      }

      if (dff < 0)
         result = 0;
      int ans1 = max(0, min(R, y) - max(L, x));
      int final_ans = max(1, result + ans1);
      cout << final_ans << endl;
   }
}
