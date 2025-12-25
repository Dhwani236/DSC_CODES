#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {4, 1, 3};
    priority_queue<int> pq(a.begin(), a.end());
    for (int i = a.size() - 1; i >= 0; i--) {
        a[i] = pq.top();
        pq.pop();
    }
    for (int x : a) cout << x << " ";
}
