#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s1,s2;
   cin>>s1>>s2;
   if(s1==s2)
   cout<<s1<<endl;
   else if((s1=='R' && s2=='B') || (s1=='B' && s2=='R'))
   cout<<'R'<<endl;
   else if((s1=='G' && s2=='R') || (s1=='R' && s2=='G'))
   cout<<'R'<<endl;
   else if((s1=='B' && s2=='G') || (s1=='G' && s2=='B'))
   cout<<'B'<<endl;
}