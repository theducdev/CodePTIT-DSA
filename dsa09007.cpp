#include <bits/stdc++.h>
using namespace std;

int used[1005];
vector <int> ke[1005];
int truoc[1005];

void BFS(int u) {
    used[u] = 1;
    queue <int> q;
    q.push(u);
    while(!q.empty()) {
        int x = q.front(); q.pop();
        for (int i = 0; i < ke[x].size(); i++) {
            int y = ke[x][i];
            if (!used[y]) {
                truoc[y] = x;
                used[y] = 1;
                q.push(y);
            }
        }
    }
}

void induongdi(int s, int t) {
    BFS(s);
    if (!used[t]) cout << "-1";
    else {
        vector <int> ans;
        while(t!=s) {
            ans.push_back(t);
            t = truoc[t];
        }
        ans.push_back(s);
        reverse(ans.begin(), ans.end());
        for (auto x : ans)  cout << x << " ";
    }
} 


int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, s, k; cin >> n >> m >> s >> k;
        memset(used, 0, sizeof(used));
        for(int i = 1; i <= m; i++ ) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        induongdi(s, k); cout << endl;
        for (int i = 1; i <= n; i++) ke[i].clear();

    }
}