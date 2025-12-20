#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,5,8,10};int k=2;sort(a.begin(),a.end());int ans=a.back()-a.front();for(int i=1;i<a.size();i++)ans=min(ans,max(a.back()-k,a[i-1]+k)-min(a.front()+k,a[i]-k));cout<<ans;}
