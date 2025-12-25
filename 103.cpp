#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

bool same(Node* a, Node* b) {
    if (!a && !b) return true;
    if (!a || !b) return false;
    return a->data == b->data && same(a->left, b->left) && same(a->right, b->right);
}

int main() {
    Node* a = new Node{1, nullptr, nullptr};
    Node* b = new Node{1, nullptr, nullptr};
    cout << same(a, b);
}
