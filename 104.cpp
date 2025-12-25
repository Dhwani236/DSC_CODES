#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* lca(Node* r, int a, int b) {
    if (!r || r->data == a || r->data == b) return r;
    Node* l = lca(r->left, a, b);
    Node* h = lca(r->right, a, b);
    if (l && h) return r;
    return l ? l : h;
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    cout << lca(r, 2, 3)->data;
}
