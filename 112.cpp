#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<pair<int,int>>> g(3);
    g[0].push_back({1, 4});
    g[0].push_back({2, 1});
    g[2].push_back({1, 2});

    vector<int> d(3, INT_MAX), v(3);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    d[0] = 0;
    pq.push({0, 0});
    int cost = 0;

    while (!pq.empty()) {
     pair<int, int> top_element = pq.top();
     int w = top_element.first;
     int u = top_element.second;

        pq.pop();
        if (v[u]) continue;
        v[u] = 1;
        cost += w;
        for ([x, wt] : g[u]) {
            if (!v[x] && d[x] > wt) {
                d[x] = wt;
                pq.push({wt, x});
            }
        }
    }
    cout << cost;
}
