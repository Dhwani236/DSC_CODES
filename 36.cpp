#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={4,5,2};stack<int>s;for(int i=a.size()-1;i>=0;i--){while(!s.empty()&&s.top()<=a[i])s.pop();cout<<(s.empty()?-1:s.top())<<" ";s.push(a[i]);}}
