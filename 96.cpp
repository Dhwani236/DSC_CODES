#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int c(Node* r) {
    if (!r) return 0;
    return 1 + c(r->left) + c(r->right);
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, nullptr};
    cout << c(r);
}
