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
// hàm insert dùng để tìm gốc n1, sau đó thêm n2 vào trái hoặc phải của nó
void insert(node*root, int n1, int n2, char c) {
    // nếu không tìm thấy node nào có data là n1 thì dừng luôn
    if (root == NULL ) return;
    // nếu tìm thấy node có data bằng n1 thì thêm vào trái hoặc phải của node
    if (root->data == n1) {
        // nếu L thì tạo node mới có data = n2 và gán nó vào bên trái
        if(c== 'L') root->left = new node(n2);
        // ngược lại 
        else root->right = new node(n2);
    }
    // nếu không tìm thấy thì tiếp tục tìm sang trái rồi sang phải
    else {
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }

}
// hàm duyệt cây theo mức
void levelOrder(node* root) {
    queue <node*> Q;
    Q.push(root);
    while(!Q.empty()) {
        node *nd = Q.front(); Q.pop();
        cout << nd -> data << " ";
        if(nd->left != NULL) Q.push(nd->left);
        if(nd->right != NULL) Q.push(nd->right);
    }

}
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        node *root = NULL;
        while(n--) {
            int n1, n2; char c;
            cin >> n1 >> n2 >>c;
            if (root == NULL) {
                root = new node(n1);
                if (c == 'L') root->left = new node(n2);
                else root->right = new node (n2);
            }
            else insert(root, n1, n2, c);
        }
        levelOrder(root);
        cout << endl;
    }

}