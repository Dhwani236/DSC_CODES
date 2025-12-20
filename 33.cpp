#include <bits/stdc++.h>
using namespace std;
int main(){string s="()[]";stack<char>st;map<char,char>m={{')','('},{']','['}};for(char c:s){if(c=='('||c=='[')st.push(c);else if(st.empty()||st.top()!=m[c]){cout<<0;return 0;}else st.pop();}cout<<st.empty();}
