#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
int used[1005];
int n, m, check;
// hàm hamilton dùng để kiểm tra xem đồ thì đó có là hamilton hay không
void hamilton(int u, int cnt) {
    // tham số cnt dùng để kiếm tra số đỉnh đã thăm
    if (cnt == n) {
        check = 1;
        return;
    }
    used[u] = 1;
    // duyệt tất cả các đỉnh kề với u
    for (auto v : ke[u]) {
        // nếu nó chưa được thăm
        if(!used[v]) {
            // đánh dấu đã thăm nó
            used[v] = 1;
            // tiếp tục quay lui đỉnh v với số đỉnh được thăm cộng thêm 1
            hamilton(v, cnt+1);
            // hết nhánh đó bỏ đánh dấu đã thăm của v
            used[v] = 0;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        check = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= m; i++) {
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        // duyệt tất cả các đỉnh của đồ thị
        for (int i = 1; i <= n; i++) {
            // tham số cnt ban đầu là 1 (đỉnh bắt đầu)
            hamilton(i,1);
            if(check == 1) break;
        }
        cout << check;
        cout << endl;
        
    }
    
}