#include <bits/stdc++.h>
using namespace std;
int main(){vector<int>a={2,3,1,1,4};int j=0,c=0,r=0;for(int i=0;i<a.size()-1;i++){r=max(r,i+a[i]);if(i==c){j++;c=r;}}cout<<j;}
