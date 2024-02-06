#include <bits/stdc++.h>
using namespace std;

int used[1005];
vector <int> ke[1005];

void BFS(int u) {
    used[u] = 1;
    queue <int> q;
    cout << u << " ";
    q.push(u);
    while(!q.empty()) {
        int x = q.front(); q.pop();
        for (int i = 0; i < ke[x].size(); i++) {
            int y = ke[x][i];
            if(!used[y]) {
                q.push(y);
                used[y] = 1;
                cout << y << " ";
            }
        }
    }
}


int main() {
    int t; cin >> t; 
    while(t--) {
        int n, m, s; cin >> n >> m >> s;
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        BFS(s); cout << endl;
        for (int i =1 ; i <= n; i++) ke[i].clear();
    }
}