#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,3},b={2,4};vector<int>c;a.insert(a.end(),b.begin(),b.end());sort(a.begin(),a.end());cout<<(a[1]+a[2])/2.0;}
