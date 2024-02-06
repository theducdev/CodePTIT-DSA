#include <bits/stdc++.h>
using namespace std;
vector <int> in, lv;

int search(vector <int> a, int st, int en, int x) {
    for (int i = st; i <= en; i++) {
        if (a[i] == x) return i;
    }
    return -1;
}

void postOrder(int in_start, int in_end, int lv_start, int lv_end) {
    if (in_start > in_end) return;
    int root = lv[lv_start];
    int in_root = search(in, in_start, in_end, root);
    if (in_root == -1) return;
    
}


int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        in.clear(); lv.clear();
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            in.push_back(x);
        } 
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            lv.push_back(x);
        } 
        postOrder(0, n-1, 0);
        cout << endl;
        
    }

}