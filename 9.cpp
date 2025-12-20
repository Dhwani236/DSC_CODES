#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={-2,1,-3,4,-1};int s=0,m=INT_MIN;for(int x:a){s=max(x,s+x);m=max(m,s);}cout<<m;}
