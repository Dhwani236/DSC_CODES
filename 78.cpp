#include <bits/stdc++.h>
using namespace std;

int p(int a, int b) {
    if (b == 0) return 1;
    return a * p(a, b - 1);
}

int main() {
    cout << p(2, 5);
}
