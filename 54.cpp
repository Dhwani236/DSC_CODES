#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,2,3,4};int s=6;sort(a.begin(),a.end());for(int i=0;i<a.size();i++){int l=i+1,r=a.size()-1;while(l<r){int t=a[i]+a[l]+a[r];if(t==s){cout<<1;return 0;}t<s?l++:r--;}}}
