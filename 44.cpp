#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={3,1,2};for(int i=0;i<a.size();i++){int m=i;for(int j=i+1;j<a.size();j++)if(a[j]<a[m])m=j;swap(a[i],a[m]);}for(int x:a)cout<<x;}
