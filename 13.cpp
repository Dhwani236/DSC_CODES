#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,4,45,6,10};int s=51,l=0,sum=0,ans=INT_MAX;for(int r=0;r<a.size();r++){sum+=a[r];while(sum>s){ans=min(ans,r-l+1);sum-=a[l++];}}cout<<ans;}
