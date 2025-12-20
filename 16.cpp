#include <bits/stdc++.h>
using namespace std;
int main(){string s="abc";int l=0,r=s.size()-1,c=0;while(l<r){c+=abs(s[l++]-s[r--]);}cout<<c;}
