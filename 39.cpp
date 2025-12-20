#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,3,-1,-3,5};int k=3;deque<int>d;for(int i=0;i<a.size();i++){while(!d.empty()&&d.front()<=i-k)d.pop_front();while(!d.empty()&&a[d.back()]<=a[i])d.pop_back();d.push_back(i);if(i>=k-1)cout<<a[d.front()]<<" ";}}
