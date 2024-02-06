#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
    node(int x) {
        data = x;
        left = right = NULL;
    }
};

void insert(node*&root, int x) {
    if(root == NULL) {
        root = new node(x);
    }
    if (x < root->data) insert(root->left, x);
    if (x > root->data) insert(root->right, x);
}

int maxDepth(node*root) {
    if (!root) return -1;
    int lDepth = maxDepth(root->left);
    int rDepth = maxDepth(root->right);
    if (lDepth > rDepth) return lDepth+1;
    else return rDepth+1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        node*root = NULL;
        while(n--) {
            int x; cin >> x;
            insert(root, x);
        }
        cout << maxDepth(root) << endl;
    }
}