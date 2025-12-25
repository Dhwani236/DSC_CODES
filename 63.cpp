#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, nullptr};
    Node* t = head;
    t->next = new Node{2, nullptr};
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}
