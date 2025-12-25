#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    head->next->next->next = head;
    unordered_set<Node*> s;
    Node* prev = nullptr;
    while (head) {
        if (s.count(head)) {
            prev->next = nullptr;
            break;
        }
        s.insert(head);
        prev = head;
        head = head->next;
    }
    cout << "done";
}
