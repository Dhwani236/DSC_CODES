#include <bits/stdc++.h>
using namespace std;
void ms(vector<int>&a,int l,int r){if(l>=r)return;int m=(l+r)/2;ms(a,l,m);ms(a,m+1,r);inplace_merge(a.begin()+l,a.begin()+m+1,a.begin()+r+1);}
int main(){vector<int>a={3,1,2};ms(a,0,a.size()-1);for(int x:a)cout<<x;}
