#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> d = {
        {0, 3, 100},
        {100, 0, 1},
        {100, 100, 0}
    };

    for (int k = 0; k < 3; k++)
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    cout << d[0][2];
}
