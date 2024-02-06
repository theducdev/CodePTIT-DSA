#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
int used[1005], parent[1005];
int ok;

void DFS(int u, int start) {
    used[u] = 1;
    for (auto x : ke[u]) {
        if (!used[x]) {
            used[x] = 1;
            parent[x] = u;
            DFS(x, start);
        }
        else if(x==start && parent[u]!=start) {
            ok = 0;
            break;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        ok = 1;
        for (int i = 1; i <= n; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            DFS(i,i);
            memset(used, 0, sizeof(used));
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}