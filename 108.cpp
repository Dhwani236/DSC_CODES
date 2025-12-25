#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> g = {{1, 2}, {0, 3}, {0}, {1}};
    vector<int> d(4, -1);
    queue<int> q;
    q.push(0);
    d[0] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : g[u]) {
            if (d[v] == -1) {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }

    cout << d[3];
}
