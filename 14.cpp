#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,2,3,3,4};int x=2,y=3;partition(a.begin(),a.end(),[&](int n){return n<x;});partition(a.begin(),a.end(),[&](int n){return n<=y;});for(int x:a)cout<<x;}
