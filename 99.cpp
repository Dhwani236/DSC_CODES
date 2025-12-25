#include <bits/stdc++.h>
using namespace std;

bool dfs(int u, int p, vector<vector<int>>& g, vector<int>& v) {
    v[u] = 1;
    for (int x : g[u]) {
        if (!v[x]) {
            if (dfs(x, u, g, v)) return true;
        } else if (x != p) return true;
    }
    return false;
}

int main() {
    vector<vector<int>> g = {{1}, {0, 2}, {1}};
    vector<int> v(3);
    cout << dfs(0, -1, g, v);
}
