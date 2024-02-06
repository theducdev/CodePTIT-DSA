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
    if (root->data == n1) {
        if(c=='L') root->left = new node(n2);
        else root->right = new node(n2);
    }
    else {
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}

void spiral_order(node *root) {
    queue <node*> Q;
    Q.push(root);
    int s, l = 0;
    vector <int> ans;
    while(!Q.empty()) {
        int s = Q.size();
        vector <int> tmp;
        for (int i = 1; i <= s; i++) {
            node *nd = Q.front(); Q.pop();
            if(nd->left) Q.push(nd->left); 
            if(nd->right) Q.push(nd->right); 
            tmp.push_back(nd->data);
        }
        if(l%2==0) reverse(tmp.begin(), tmp.end());
        l++;
        for (auto x : tmp) ans.push_back(x);
    } 
    for (auto x : ans) cout << x << " ";
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
                if(c== 'L') root->left = new node(n2);
                else root->right = new node(n2);
            }
            else insert(root, n1, n2, c);
        }
        spiral_order(root);
        cout << endl;
    }

}