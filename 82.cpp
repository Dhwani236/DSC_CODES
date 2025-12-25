#include <bits/stdc++.h>
using namespace std;

void h(int n, char a, char b, char c) {
    if (n == 0) return;
    h(n - 1, a, c, b);
    cout << a << c << " ";
    h(n - 1, b, a, c);
}

int main() {
    h(2, 'A', 'B', 'C');
}
