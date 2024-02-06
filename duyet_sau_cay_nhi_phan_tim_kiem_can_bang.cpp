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
// hàm xây dựng cây 
node *build_tree(int a[], int start, int end) {
    // quay lui điều kiện dừng là start > end
    if(start > end) return NULL;
    // lấy ra index chính giữa
    int mid = (start+end)/2;
    // tạo node mới với giá trị là phần tử ở vị trí đó
    node *root = new node (a[mid]);
    // quay lui node trái, node phải 
    root->left = build_tree(a, start, mid-1);
    root->right = build_tree(a, mid+1, end);
    // trả về phần tử gốc
    return root;
}

void postOrder(node*root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        // sắp xếp lại mảng
        sort(a+1, a+1+n);
        postOrder(build_tree(a,1,n));
        cout << endl;
    }
}