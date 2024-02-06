// liệt kê đỉnh trụ
#include <bits/stdc++.h>

using namespace std;
vector <int> ke[1005];
int used[1005];
void DFS(int u) {
    used[u] = 1;
    for (auto v : ke[u]) {
        if(!used[v]) {
            used[v] = 1;
            DFS(v);
        }
    }
}
// hàm tính số thành phần liên thông
int tinhtplt(int n, int m) {
    int so = 0;
    for(int i = 1; i <= n; i++) {
        if(!used[i]) {
            DFS(i);
            so++;
        }
    }
    // sau khi tính xong thì memset hết thành 0
    memset(used, 0, sizeof(used));
    return so;
} 

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        // tính số tplt ban đầu khi chưa bỏ đi đỉnh nào
        int s = tinhtplt(n,m);
        for(int i = 1; i <= n; i++) {
            // bỏ đi đỉnh i bằng cách cho used[i] = 1, tức là đã xét đỉnh đó rồi
            used[i] = 1;
            // so sánh số tplt khi đã bỏ đỉnh i với khi chưa bỏ đỉnh i, nếu nó lớn hơn thì i là đỉnh trụ, in
            if (tinhtplt(n,m) > s) cout << i << " ";
        }
        cout << endl;
        
        
    }

}