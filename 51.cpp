#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,2,2,2,3};cout<<lower_bound(a.begin(),a.end(),2)-a.begin()<<" "<<upper_bound(a.begin(),a.end(),2)-a.begin()-1;}
