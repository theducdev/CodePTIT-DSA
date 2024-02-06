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

void insert(node *root,int n1, int n2, char c) {
    if (!root) return;
    if (root->data == n1) {
        if (c == 'L') root->left = new node(n2);
        else root->right = new node(n2);
    }
    else {
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}


// hàm check dùng để kiểm tra xem có thoả mãn đề bài không
int check(node*root) {
    // vector lv để lưu tất cả các mức của các lá
    vector <int> lv;
    queue <node*> Q;
    // s là size của Q, l là mức
    int s, l = 0;
    Q.push(root);
    while(!Q.empty()) {
        // gọi s = số lượng phần tử trong Q
        s = Q.size();
        // duyệt tất cả các node trung gian cùng mức
        for (int i = 1; i <= s; i++) {
            node *nd = Q.front(); Q.pop();
            // nếu node đó là lá, thì push mức của nó vào
            if (!nd->left && !nd->right) lv.push_back(l);
            else {
                // nếu chưa thì push node trái và phải vào
                if (nd->left) Q.push(nd->left);
                if (nd->right) Q.push(nd->right);
            }
        }
        // sang mức dưới
        l++;
    } 
    sort(lv.begin(), lv.end());
    if (lv[0] == lv[lv.size()-1]) return 1;
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
                root = new node(n1);
                if (c=='L') root->left = new node(n2);
                else root->right = new node(n2);
            }
            else {
                insert(root, n1, n2, c);
            }
        }
        cout << check(root) << endl;
    }

}