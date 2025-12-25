#include <bits/stdc++.h>
using namespace std;

int r(int n, int rev = 0) {
    if (n == 0) return rev;
    return r(n / 10, rev * 10 + n % 10);
}

int main() {
    cout << r(123);
}
