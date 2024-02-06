#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

struct node {
    int data;
    node *left;
    node *right;
    node (int x) {
        data = x;
        left = right = NULL;
    }
};

void insert(node *&root, int x) {
    if (root == NULL) {
        root = new node(x); return;
    }
    if (root->data > x) insert(root->left, x);
    if (root->data < x) insert(root->right, x);
}

void preOrder(node *root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        node *root = NULL;
        while(n--) {
            int x; cin >> x;
            insert(root, x);
        }
        preOrder(root);
        cout << endl;
        
    }
}