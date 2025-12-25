#include <bits/stdc++.h>
using namespace std;
int main()
{vector<int>a={1,2,2,4};
set<int>s;int r,m;
for(int x:a)
 if(!s.insert(x).second)
   r=x;
for(int i=1;i<=a.size();i++)
  if(!s.count(i))
     m=i;
cout<<r<<" "<<m;}
