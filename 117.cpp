#include <bits/stdc++.h>
using namespace std;

struct Trie {
    Trie* ch[26] = {};
    bool end = false;
};

int main() {
    Trie* r = new Trie();
    string s = "abc";
    Trie* t = r;
    for (char c : s) {
        if (!t->ch[c - 'a']) t->ch[c - 'a'] = new Trie();
        t = t->ch[c - 'a'];
    }
    t->end = true;

    t = r;
    for (char c : s) {
        if (!t->ch[c - 'a']) {
            cout << 0;
            return 0;
        }
        t = t->ch[c - 'a'];
    }
    cout << t->end;
}
