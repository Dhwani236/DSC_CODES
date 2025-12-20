#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={-1,2,-3,4};stable_partition(a.begin(),a.end(),[](int x){return x<0;});for(int x:a)cout<<x<<" ";}
