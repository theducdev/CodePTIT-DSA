#include <bits/stdc++.h>

using namespace std;
// tạo vector ke để lưu danh sách kề
vector <int> ke[1005];
// mảng used để đánh dầu phần tử nào đã đi qua
int used[1005];
void BFS(int u) {
    // hàng đợi q dùng để push các phần tử sẽ xét
    queue <int> q;
    // xét đỉnh đầu tiên thì push đỉnh đó vào và đánh dấu nó đã được dùng
    q.push(u);
    used[u] = 1;
    cout << u << " ";
    // làm cho đến khi queue rỗng
    while(!q.empty()) {
        // xét đỉnh đầu tiên trong queue, pop nó ra luôn
        int x = q.front(); q.pop();
        // xét tất cả các đỉnh kề với đỉnh x đang xét
        for (int i = 0; i < ke[x].size(); i++) {
            // nếu đỉnh đó chưa được thăm thì thăm
            if (!used[ke[x][i]]) {
                // push nó vào q, đánh dấu nó đã được thăm
                q.push(ke[x][i]);
                used[ke[x][i]] = 1;
                cout << ke[x][i] << " ";
            }
        }
    }
}


int main() {
    int t; cin >> t;
    while(t--) {
        memset(used, 0, sizeof(used));
        int n, m, s; cin >> n >> m >> s;
        for ( int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(s); cout << endl;
        for (int i = 1; i <= n; i++) ke[i].clear();
    }
}