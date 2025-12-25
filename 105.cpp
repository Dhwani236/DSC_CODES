#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool bst(Node* r, long mn, long mx) {
    if (!r) return true;
    if (r->data <= mn || r->data >= mx) return false;
    return bst(r->left, mn, r->data) && bst(r->right, r->data, mx);
}

int main() {
    Node* r = new Node{2, new Node{1, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    cout << bst(r, LONG_MIN, LONG_MAX);
}
