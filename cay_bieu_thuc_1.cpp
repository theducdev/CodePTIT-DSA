#include <bits/stdc++.h>
using namespace std;

struct node {
    char data;
    node *left;
    node *right;
    node (char x) {
        data = x;
        left = right = NULL;
    }
};
// tạo cây biểu thức từ biểu thức hậu tố
node* build_tree (string s) {
    // st để lưu các node lá
    stack <node*> st;
    for (auto ch : s) {
        // nếu kí tự đó là toán hạng thì tạo 1 node mới có data là kí tự đó
        if (isalpha(ch)||isdigit(ch)) st.push(new node(ch));
        else {
            // nếu kí tự đó là toán tử thì lấy ra 2 phần tử đầu tiên của st
            node *right = st.top(); st.pop();
            node *left = st.top(); st.pop();
            // tạo node trung gian có data là toán tử đó, left và right là 2 toán hạng
            node *nd = new node(ch);
            nd->left = left;
            nd->right = right;
            // push node đó vào stack
            st.push(nd);
        }
    }
    // trả về gốc của cây
    return st.top();

}
// duyệt theo thứ tự giữa để in ra biểu thức trung tố
void inorder(node*nd) {
    if(nd != NULL) {
        inorder(nd->left);
        cout << nd -> data;
        inorder(nd->right);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        node *root = build_tree(s);
        inorder(root);
        cout << endl;
    }
}