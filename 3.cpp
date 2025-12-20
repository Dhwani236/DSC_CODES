#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={7,4,6,3};int k=2;nth_element(a.begin(),a.end()-k,a.end());cout<<a[a.size()-k];}
