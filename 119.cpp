#include <bits/stdc++.h>
using namespace std;

int main() {
    string p = "abab";
    vector<int> lps(p.size());
    for (int i = 1, j = 0; i < p.size(); i++) {
        while (j > 0 && p[i] != p[j]) j = lps[j - 1];
        if (p[i] == p[j]) j++;
        lps[i] = j;
    }
    for (int x : lps) cout << x << " ";
}
