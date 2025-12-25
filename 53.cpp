#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={2,2,1,2};int c=0,m;for(int x:a){if(c==0)m=x;c+=(x==m?1:-1);}cout<<m;}
