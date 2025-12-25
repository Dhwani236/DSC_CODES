#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}
