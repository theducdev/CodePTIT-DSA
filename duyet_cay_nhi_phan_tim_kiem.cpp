#include <bits/stdc++.h>
using namespace std;

struct node {
    int data; 
    node *left;
    node *right;
    node (int x) {
        data = x;
        left = right = NULL;
    }
};
// nếu cho preOrder thì cứ duyệt theo thứ tự
void insert(node *&root, int x) {
    if (root == NULL) {
        root = new node(x); return;
    }
    // nếu x nhỏ hơn data thì thêm vào bên trái, lớn hơn thêm bên phải
    if (root->data > x) insert(root->left, x);
    if (root->data < x) insert(root->right, x);
}

void postOrder(node*root) {
    if(root) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
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
        postOrder(root);
        cout << endl;
        
    }
}