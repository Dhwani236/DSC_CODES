#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    int c = 0;
    while (head) {
        c++;
        head = head->next;
    }
    cout << c;
}
