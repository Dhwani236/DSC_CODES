#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={100,80,60,70};stack<int>s;for(int i=0;i<a.size();i++){while(!s.empty()&&a[s.top()]<=a[i])s.pop();cout<<(s.empty()?i+1:i-s.top())<<" ";s.push(i);}}
