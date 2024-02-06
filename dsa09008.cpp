#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
int used[1005];
// DFS dùng để lưu duyệt hết các đỉnh của 1 thành phần liên thông
void DFS(int u ) {
    used[u] = 1;
    for (auto v : ke[u]) {
        if (!used[v]) {
            used[v] = 1;
            DFS(v);
        }
    }
}


int main() {
    int t; cin >> t;
    while(t--) {
        // biến solt để lưu số thành phần liên thông, ban đầu khởi tạo bằng 0
        int solt = 0;
        memset(used, 0, sizeof(used));
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) ke[i].clear();
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        // duyệt tất cả các đỉnh của đồ thị
        for (int i = 1; i <= n; i++) {
            // nếu gặp đỉnh nào chưa được thăm thì sẽ solt++
            if (!used[i]) {
                solt++;
                // DFS từ đỉnh đó đến đi hết thành phàn liên thông
                DFS(i);
            }
        }
        cout << solt << endl;
    }

}