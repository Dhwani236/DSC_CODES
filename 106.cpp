#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void inorder(Node* r, vector<int>& v) {
    if (!r) return;
    inorder(r->left, v);
    v.push_back(r->data);
    inorder(r->right, v);
}

int main() {
    Node* r = new Node{2, new Node{1, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    vector<int> v;
    inorder(r, v);
    cout << v[1];
}
