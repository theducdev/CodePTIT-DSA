#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
int used[1005];
int n, m;

void Tree_BFS(int u) {
    used[u] = 1;
    queue <int> Q;
    Q.push(u);
    int sc = 0;
    vector <pair<int,int>> T;
    while(!Q.empty()) {
        int x = Q.front(); Q.pop();
        for(auto v : ke[x]) {
            if (!used[v]) {
                used[v] = 1; sc++;
                Q.push(v);
                T.push_back({x,v});
            }
        }
    }
    if (sc <n-1) cout << "-1";
    else for (auto x : T) {
        cout << x.first << " " << x.second << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--){
        int u; cin >> n >> m >> u;
        memset(used, 0, sizeof(used));
        for(int i = 1; i <= n; i++) ke[i].clear();
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        Tree_BFS(u);
        cout << endl;

    }
}