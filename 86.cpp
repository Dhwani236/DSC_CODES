#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {10, 9, 2, 5, 3, 7, 101};
    vector<int> dp(a.size(), 1);
    int ans = 1;

    for (int i = 1; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans;
}
