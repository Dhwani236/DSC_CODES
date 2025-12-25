#include <bits/stdc++.h>
using namespace std;

bool dfs(int u, vector<vector<int>>& g, vector<int>& v, vector<int>& st) {
    v[u] = st[u] = 1;
    for (int x : g[u]) {
        if (!v[x] && dfs(x, g, v, st)) return true;
        if (st[x]) return true;
    }
    st[u] = 0;
    return false;
}

int main() {
    vector<vector<int>> g = {{1}, {2}, {0}};
    vector<int> v(3), st(3);
    cout << dfs(0, g, v, st);
}
