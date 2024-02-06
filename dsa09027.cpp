#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
int used[1005];

void DFS(int u) {
    used[u] = 1;
    for (auto v : ke[u]) {
        if(!used[v]) {
            DFS(v);
        }
    }
}
// hàm checkduongdi dùng để kiểm tra xem đỉnh t có được thăm chưa
int checkduongdi(int s, int t) {
    DFS(s);
    // nếu đã được thăm thì có nghĩa là có thể đi từ s đến t
    if(used[t] == 1) return 1;
    return 0;
}


int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for(int i = 1; i <= 1005; i++) ke[i].clear();
        for (int i = 1; i <= m; i++) {
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int q; cin >> q;
        while(q--) {
            memset(used, 0, sizeof(used));
            int x, y; cin >> x >> y; 
            if (checkduongdi(x,y)) cout << "YES";
            else cout << "NO";
            cout << endl;

        }

    }
}