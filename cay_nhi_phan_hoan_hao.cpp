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

// hàm isPerfect để kiểm tra xem cây có là cây hoàn hảo hay không
// tham số l là từng mức của cây
bool isPerfect(node* root, int l) {
    queue <node*> Q;
    Q.push(root);
    // s là số lượng cây của mức, nếu s=2 mũ l thì mỗi node trung gian sẽ có đủ 2 node con
    int s = 0;
    while(!Q.empty()) {
        s = Q.size();
        if (s!=int(pow(2,l))) return false;
        // lấy ra từng node của mức đó và thêm node con trái và phải của nó vào
        for (int i = 0; i < s; i++) {
            node *t=Q.front(); Q.pop();
            if(t->left) Q.push(t->left);
            if(t->right) Q.push(t->right);
        }
        // hết 1 mức thì l++ là xuống mức dưới
        l++;
    }
    return true;

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
        if(isPerfect(root, 0)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }

}