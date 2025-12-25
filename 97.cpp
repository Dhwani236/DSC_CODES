#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> g = {{1, 2}, {0}, {0}};
    queue<int> q;
    vector<int> v(3);
    q.push(0);
    v[0] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int x : g[u])
            if (!v[x]) {
                v[x] = 1;
                q.push(x);
            }
    }
}
