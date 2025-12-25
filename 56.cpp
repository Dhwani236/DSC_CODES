#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,3},b={2,4};a.insert(a.end(),b.begin(),b.end());sort(a.begin(),a.end());for(int x:a)cout<<x;}
