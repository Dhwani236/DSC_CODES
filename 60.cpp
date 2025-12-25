#include <bits/stdc++.h>
using namespace std;
int main()
{vector<int>a={4,2,-3,1};
set<int>s;int sum=0;
for(int x:a)
{sum+=x;
    if(sum==0||s.count(sum))
    {cout<<1;
    return 0;}
    s.insert(sum);}
cout<<0;
}
