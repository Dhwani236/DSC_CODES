#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={2,4,1};int c=0;for(int i=0;i<a.size();i++)for(int j=i+1;j<a.size();j++)if(a[i]>a[j])c++;cout<<c;}
