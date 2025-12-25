#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{1, new Node{2, nullptr}}};
    Node* cur = head;
    while (cur && cur->next) {
        if (cur->data == cur->next->data)
            cur->next = cur->next->next;
        else
            cur = cur->next;
    }
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}
