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

bool isFull(node* root) {
    // nếu không có cả 2 node trái phải thì là đúng
    if (!root->left && !root->right) return true;
    // khởi tạo con trỏ r và l, gán bằng địa chỉ node phải và trái
    node *r, *l;
    r = root->right;
    l = root->left;
    // nếu tồn tại r và l thì kiểm tra node trái và node phải
    if(r&&l) {
        // nếu đồng thời 2 node đó đều đúng thì đúng
        if(isFull(l)&&isFull(r)) return true;
    }
    return false;

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
        if(isFull(root)) cout << "1";
        else cout << "0";
        cout << endl;
    }

}