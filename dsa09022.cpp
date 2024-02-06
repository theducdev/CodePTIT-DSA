#include <bits/stdc++.h>

using namespace std;

int used[1005];
vector <int> ke[1005];
void DFS(int u ) {
    used[u] = 1; cout << u << " ";
    for (auto v : ke[u]) {
        if(!used[v]) DFS(v);
    }
}

 
int main() {   
    int t; cin >> t;
    while(t--) {
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= 1005; i ++) ke[i].clear();
        int n, m, s; cin >> n >> m >> s;
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        DFS(s); cout << endl;
    }    
}