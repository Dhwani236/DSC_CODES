#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={2,1,5,6,3};int k=3,c=0;for(int x:a)if(x<=k)c++;int bad=0;for(int i=0;i<c;i++)if(a[i]>k)bad++;int ans=bad;for(int i=0,j=c;j<a.size();i++,j++){if(a[i]>k)bad--;if(a[j]>k)bad++;ans=min(ans,bad);}cout<<ans;}
