#include <bits/stdc++.h>
using namespace std;
vector <int> ke[100005];
int used[100005];
int depth[100005];
// u là đỉnh, d là độ sâu của đỉnh đó
void DFS(int u, int d) { 
    // khi duyệt đỉnh u thì gán độ sâu của u là d
    used[u] = 1;
    depth[u] = d;
    for (auto x : ke[u]) {
        if (used[x] == 0) {
            used[x] = 1;
            // đỉnh liền sau thì độ sâu sẽ là d+1
            DFS(x, d+1);
        }
    }
    
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        memset(depth, 0, sizeof(depth));
        for (int i = 1; i <= n-1; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        DFS(1, 0);
        int ans = *max_element(depth+1, depth+1+n);
        cout << ans << endl;
    }

}