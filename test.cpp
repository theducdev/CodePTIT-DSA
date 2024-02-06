#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
using namespace std;
int a[1005];
struct Node{
    int data;
    Node *left;
    Node *right;
    Node (int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void buildTree(Node* &root, int data){
    if(root==NULL) {root=new Node(data);return;}
    if(data > root->data) buildTree(root->right, data);
    if(data < root->data) buildTree(root->left, data);
    
}

void preoder(Node *root){
    if(root){
        cout << root->data << " ";
        preoder(root->left);
        preoder(root->right);
    }
    
}
int main(){
    faster();
    int t; 
    t = 1;
    cin >> t;
	// cin.ignore();
    while(t--){
        int n; cin >> n;
        Node *root=NULL;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            buildTree(root,x);
        }
        preoder(root);
        cout << endl;
    }
}