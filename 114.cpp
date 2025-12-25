#include <bits/stdc++.h>
using namespace std;

int find(int x, vector<int>& p) {
    if (p[x] == x) return x;
    return p[x] = find(p[x], p);
}

int main() {
    vector<int> p = {0, 1, 2};
    p[find(1, p)] = find(2, p);
    cout << (find(1, p) == find(2, p));
}
