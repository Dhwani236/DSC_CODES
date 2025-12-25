#include <bits/stdc++.h>
using namespace std;

int s(int n) {
    if (n == 0) return 0;
    return n % 10 + s(n / 10);
}

int main() {
    cout << s(123);
}
