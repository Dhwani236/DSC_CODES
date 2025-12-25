#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    int n = 2;
    Node* f = head;
    Node* s = head;
    while (n--) f = f->next;
    while (f) {
        f = f->next;
        s = s->next;
    }
    cout << s->data;
}
