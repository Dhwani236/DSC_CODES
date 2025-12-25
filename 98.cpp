#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& g, vector<int>& v) {
    v[u] = 1;
    cout << u << " ";
    for (int x : g[u])
        if (!v[x])
            dfs(x, g, v);
}

int main() {
    vector<vector<int>> g = {{1, 2}, {0}, {0}};
    vector<int> v(3);
    dfs(0, g, v);
}
