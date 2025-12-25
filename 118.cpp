#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcdabc", p = "abc";
    for (int i = 0; i + p.size() <= s.size(); i++)
        if (s.substr(i, p.size()) == p)
            cout << i << " ";
}
