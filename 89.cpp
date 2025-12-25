#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {3, 34, 4, 12, 5};
    int sum = 9;
    vector<bool> dp(sum + 1, false);
    dp[0] = true;

    for (int x : a) {
        for (int j = sum; j >= x; j--) {
            dp[j] = dp[j] || dp[j - x];
        }
    }

    cout << dp[sum];
}
