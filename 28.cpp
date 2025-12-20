#include <bits/stdc++.h>
using namespace std;
int main(){string s="aabbc";map<char,int>m;for(char c:s)m[c]++;for(char c:s)if(m[c]==1){cout<<c;break;}}
