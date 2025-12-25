#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void post(Node* r) {
    if (!r) return;
    post(r->left);
    post(r->right);
    cout << r->data << " ";
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    post(r);
}
