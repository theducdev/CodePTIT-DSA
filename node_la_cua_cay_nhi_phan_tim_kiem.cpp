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

void insert(node*&root, int x) {
    if (root == NULL) {
        root = new node (x);
    }
    if(x < root->data) insert(root->left, x);
    if(x > root->data) insert(root->right, x);
}
// sửa hàm preOrder để chỉ in ra node lá
void preOrder(node*root) {
    if (root != NULL) {
        // kiểm tra xem nó có phải node lá hay không, rồi mới in
        if (root->left == NULL && root->right == NULL) cout << root->data << " ";
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