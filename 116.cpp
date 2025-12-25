#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 23, 12, 9};
    int k = 2;
    priority_queue<int, vector<int>, greater<>> pq;

    for (int x : a) {
        pq.push(x);
        if (pq.size() > k) pq.pop();
    }

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}
