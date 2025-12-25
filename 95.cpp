#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    Node* r = new Node{1, new Node{2, nullptr, nullptr}, new Node{3, nullptr, nullptr}};
    queue<Node*> q;
    q.push(r);
    while (!q.empty()) {
        Node* t = q.front();
        q.pop();
        cout << t->data << " ";
        if (t->left) q.push(t->left);
        if (t->right) q.push(t->right);
    }
}
