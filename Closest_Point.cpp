#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

void Closest_Point()
{
   int num;
   cin >> num;
   vector<int> vec(num);
   for (int i = 0; i < num; i++)
      cin >> vec[i];
   if (num > 2)
   {
      cout << "NO" << endl;
      return;
   }

   if (vec[1] == 1+ vec[0])
    cout << "NO" << endl;
   
   else
      cout << "YES" << endl;
   
}

int main()
{
   int tst;
   cin >> tst;
   while (tst--)
   {
      Closest_Point();
   }
}
