#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<pair<int,int>>> g(3);
    g[0].push_back({1, 4});
    g[0].push_back({2, 1});
    g[2].push_back({1, 2});

    vector<int> d(3, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    d[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        auto [dist, u] = pq.top();
        pq.pop();
        if (dist > d[u]) continue;
        for (auto [v, w] : g[u]) {
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }
    }

    cout << d[1];
}
