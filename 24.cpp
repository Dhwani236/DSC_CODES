#include <bits/stdc++.h>
using namespace std;
int main(){string s="hello";cout<<count_if(s.begin(),s.end(),[](char c){return string("aeiou").find(c)!=string::npos;});}
