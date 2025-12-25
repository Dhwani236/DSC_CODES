#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> c = {1, 2, 5};
    int n = 5;
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
        for (int x : c)
            if (i >= x)
                dp[i] = min(dp[i], dp[i - x] + 1);
    cout << dp[n];
}
