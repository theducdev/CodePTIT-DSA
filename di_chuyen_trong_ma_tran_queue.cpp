#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005];
int f[1005][1005];
int dichuyen() {
    memset(f, -1, sizeof(f));
    queue <pair<int,int>> Q;
    Q.push({1,1});
    f[1][1] = 0;
    while(!Q.empty()) {
        pair <int,int> x = Q.front(); Q.pop();
        int i = x.first, j = x.second;
        if (f[i][j+a[i][j]] == -1) {
            f[i][j+a[i][j]] = f[i][j] + 1;
            Q.push({i, j+a[i][j]});
        }
        if (f[i+a[i][j]][j] == -1) {
            f[i+a[i][j]][j] = f[i][j] + 1;
            Q.push({i+a[i][j], j});
        }
        if (f[n][m] != -1) break;
    }
    return f[n][m];
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        cout << dichuyen() << endl;
    }

}