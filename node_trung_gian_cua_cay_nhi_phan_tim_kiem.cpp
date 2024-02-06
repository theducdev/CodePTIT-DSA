#include <bits/stdc++.h>
using namespace std;
int tg = 0;

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
        root = new node(x);
    }
    if(x < root->data) insert(root->left, x);
    if(x > root->data) insert(root->right, x);
} 
// nếu node đó có node trái hoặc node phải thì nó là node trung gian, tg++
int preOrder(node*root) {
    if (root != NULL) {
        if (root->left || root->right) tg++;
        preOrder(root->left);
        preOrder(root->right);
    }
    return tg;
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
        cout << preOrder(root) << endl;
        tg = 0;
    }
}