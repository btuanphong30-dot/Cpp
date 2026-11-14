#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* nLeft;
    Node* nRight;

    Node(int value) {
        data = value;
        nLeft = nRight = NULL;
    }
};

void buildTree(Node* &a, int value) {
    if(a == NULL) {
        a = new Node(value);
        return;
    }

    if(value < a-> data) {
        buildTree(a-> nLeft, value);
    } else {
        buildTree(a-> nRight, value);
    }
}

void postOrder(Node* a) {
    if(a == NULL) return;

    postOrder(a-> nLeft);
    postOrder(a-> nRight);
    cout << a-> data << " ";
}
void preOrder(Node* a) {
    if(a == NULL) return;

    cout << a-> data << " ";
    preOrder(a-> nLeft);
    preOrder(a-> nRight);
}
void inOrder(Node* a) {
    if(a == NULL) return;

    inOrder(a-> nLeft);
    cout << a-> data << " ";
    inOrder(a-> nRight);
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        Node* node = NULL;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            buildTree(node, x);
        }
        postOrder(node);
        cout << endl;
    }
    return 0;
}