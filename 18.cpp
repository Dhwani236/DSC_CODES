#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,2},b={3};a.insert(a.end(),b.begin(),b.end());sort(a.begin(),a.end());cout<<a[a.size()/2];}
