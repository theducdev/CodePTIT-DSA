#include <bits/stdc++.h>
using namespace std;

int used[1005];
vector <int> ke[1005];
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
        int n, m; cin >> n >> m;
        int solt = 0;
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= n; i++) ke[i].clear();
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        for(int i = 1; i<= n;i++) {
            if (!used[i]) {
                solt++;
                DFS(i);
            }
        }
        if (solt == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}