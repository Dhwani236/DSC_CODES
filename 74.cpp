#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {2, 3, 4};
    vector<int> r;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(r));
    for (int x : r) cout << x << " ";
}
