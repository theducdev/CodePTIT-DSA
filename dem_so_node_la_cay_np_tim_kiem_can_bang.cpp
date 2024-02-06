#include <bits/stdc++.h>
using namespace std;
int la = 0;

struct node {
    int data;
    node *left;
    node *right;
    node (int x) {
        data = x;
        left = right = NULL;
    }
};

node *build_tree(int a[], int start, int end) {
    if (start > end) return NULL;
    int mid = (start+end)/2;
    node *root = new node (a[mid]);
    root->left = build_tree(a, start, mid-1);
    root->right = build_tree(a, mid+1, end);
    return root;
}

void preOrder(node*root) {
    if (root != NULL) {
        if (root-> left == NULL && root->right == NULL) la++;
        preOrder(root->left);
        preOrder(root->right);
    } 
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+1+n);
        preOrder(build_tree(a, 1, n));
        cout << la;
        cout << endl;
        la = 0;
    }
} 