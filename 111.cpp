#include <bits/stdc++.h>
using namespace std;

int find(int x, vector<int>& p) {
    return p[x] == x ? x : p[x] = find(p[x], p);
}

int main() {
    vector<vector<int>> e = {{1,0,1},{2,0,2},{3,1,2}};
    vector<int> p(3);
    iota(p.begin(), p.end(), 0);
    sort(e.begin(), e.end());
    int cost = 0;

    for (auto& x : e) {
        int u = find(x[1], p);
        int v = find(x[2], p);
        if (u != v) {
            cost += x[0];
            p[u] = v;
        }
    }

    cout << cost;
}
