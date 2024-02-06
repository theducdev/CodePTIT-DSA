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

void insert(node *root, int n1, int n2, char c) {
    if(!root) return;
    if(root->data == n1) {
        if (c=='L') root->left = new node(n2);
        else root->right = new node(n2);
    } 
    else {
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}
// hàm isEqual kiểm tra xem 2 cây có bằng nhau hay không?
int isEqual(node*root1, node*root2) {
    // nếu 2 cây cùng rỗng thì tất nhiên bằng nhau
    if (!root1 && !root2) return 1;
    // nếu cả 2 cây khác rỗng thì sẽ bằng nhau nếu data của chúng bằng nhau và left= left, right = right
    if (root1 && root2) {
        return (root1->data == root2->data && isEqual(root1->left, root2->left) && isEqual(root1->right, root2->right));
    }
    // nếu 1 trong 2 cây bằng rỗng thì khác nhau
    return 0;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        node *root = NULL;
        while(n--) {
            int n1, n2; char c;
            cin >> n1 >> n2 >> c;
            if (!root) {
                root = new node (n1);
                if(c=='L') root->left = new node (n2);
                else root->right = new node (n2);
            }
            else {
                insert(root, n1, n2, c);
            }
        }
        int m; cin >> m;
        node *root2 = NULL;
        while(m--) {
            int n1, n2; char c;
            cin >> n1 >> n2 >> c;
            if (!root2) {
                root2 = new node (n1);
                if(c=='L') root2->left = new node (n2);
                else root2->right = new node (n2);
            }
            else {
                insert(root2, n1, n2, c);
            }
        }
        cout << isEqual(root, root2)<< endl;

    }

}