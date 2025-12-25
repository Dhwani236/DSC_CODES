#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int h(Node* r) {
    if (!r) return 0;
    int l = h(r->left);
    int rr = h(r->right);
    if (l == -1 || rr == -1 || abs(l - rr) > 1) return -1;
    return 1 + max(l, rr);
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, nullptr};
    cout << (h(r) != -1);
}
