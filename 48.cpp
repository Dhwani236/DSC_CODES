#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,4,1,2};map<int,int>m;for(int x:a)m[x]++;for(auto&p:m)while(p.second--)cout<<p.first;}
