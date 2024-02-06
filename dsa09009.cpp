#include <bits/stdc++.h>
using namespace std;

int used[1005];
vector <int> ke[1005];

void BFS(int u ) {
    used[u] = 1;
    queue <int> q;
    q.push(u);
    while(!q.empty()) {
        int x = q.front(); q.pop();
        for (int i = 0; i < ke[x].size(); i++) {
            int y = ke[x][i];
            if (!used[y]) {
                used[y] = 1;
                q.push(y);
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        int solt = 0;
        for(int i = 1; i <= m; i++) {
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            if (!used[i]) {
                solt++;
                BFS(i);
            }
        }
        cout << solt << endl;
    }

}