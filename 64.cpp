#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, nullptr}};
    head = head->next;
    cout << head->data;
}
