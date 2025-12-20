#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,2,3},b={2,3,4};set<int>s(a.begin(),a.end());s.insert(b.begin(),b.end());for(int x:s)cout<<x<<" ";}
