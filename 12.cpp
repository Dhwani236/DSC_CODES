#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={7,3,2,4,9,12};int m=3;sort(a.begin(),a.end());int ans=INT_MAX;for(int i=0;i+m-1<a.size();i++)ans=min(ans,a[i+m-1]-a[i]);cout<<ans;}
