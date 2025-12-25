#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int h(Node* r) {
    if (!r) return 0;
    return 1 + max(h(r->left), h(r->right));
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, nullptr};
    cout << h(r);
}
