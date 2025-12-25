#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int d = 0;

int height(Node* r) {
    if (!r) return 0;
    int l = height(r->left);
    int h = height(r->right);
    d = max(d, l + h);
    return 1 + max(l, h);
}

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    height(r);
    cout << d;
}
