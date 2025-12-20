#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={4,3,2};for(int i=0;i<a.size();i++)for(int j=0;j<a.size()-i-1;j++)if(a[j]>a[j+1])swap(a[j],a[j+1]);for(int x:a)cout<<x;}
