#include <bits/stdc++.h>
using namespace std;
int main(){stack<int>a,b;a.push(1);a.push(2);while(!a.empty()){b.push(a.top());a.pop();}cout<<b.top();}
