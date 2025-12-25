#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> g = {{}, {0}, {0}};
    vector<int> in(3);
    for (auto& u : g)
        for (int v : u)
            in[v]++;
    queue<int> q;
    for (int i = 0; i < 3; i++)
        if (!in[i]) q.push(i);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : g[u])
            if (--in[v] == 0)
                q.push(v);
    }
}
