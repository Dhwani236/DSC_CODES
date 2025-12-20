#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={1,3,2};for(int i=0;i<a.size();i++)if((i==0||a[i]>a[i-1])&&(i==a.size()-1||a[i]>a[i+1]))cout<<a[i];}
