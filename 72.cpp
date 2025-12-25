#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    vector<int> v = {1, 2, 2, 1};
    cout << equal(v.begin(), v.end(), v.rbegin());
}
