#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    inorder(r);
}
