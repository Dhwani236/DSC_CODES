#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{2, nullptr};
    Node* n = new Node{1, head};
    head = n;
    cout << head->data;
}
