#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    int key = 2;
    while (head) {
        if (head->data == key) {
            cout << 1;
            return 0;
        }
        head = head->next;
    }
    cout << 0;
}