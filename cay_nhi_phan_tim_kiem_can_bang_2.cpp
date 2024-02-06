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
// xây dựng cây nhị phân tìm kiếm cân bằng 
node *build_tree( int a[], int start, int end ) {
    // điều kiện dừng là start lớn hơn end
    if (start > end) return NULL;
    // lấy ra số thứ tự ở chính giữa
    int mid = (start+end)/2;
    // tạo node gốc 
    node *root = new node (a[mid]);
    // đệ quy để tạo các node trái phải
    root->left = build_tree(a, start, mid-1);
    root->right = build_tree(a, mid+1, end);
    // trả về node gốc của cây
    return root;
}

void preOrder(node*root) {
    if(root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
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
        // sắp xếp lại mảng theo thứ tự tăng dần
        sort(a+1, a+1+n);
        preOrder(build_tree(a, 1, n));
        cout << endl;
    }
}