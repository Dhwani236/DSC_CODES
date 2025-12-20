#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={4,3,1};for(int i=1;i<a.size();i++){int k=a[i],j=i-1;while(j>=0&&a[j]>k){a[j+1]=a[j];j--;}a[j+1]=k;}for(int x:a)cout<<x;}
