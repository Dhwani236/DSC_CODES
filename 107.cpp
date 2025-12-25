#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void mirror(Node* r) {
    if (!r) return;
    swap(r->left, r->right);
    mirror(r->left);
    mirror(r->right);
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    mirror(r);
    cout << r->left->data;
}
