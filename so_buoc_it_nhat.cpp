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
        if (f[i+abs(a[i][j]-a[i+1][j])][j] == -1) {
            f[i+abs(a[i][j]-a[i+1][j])][j] = f[i][j] + 1;
            Q.push({i+abs(a[i][j]-a[i+1][j]), j});
        }
        if (f[i][j+abs(a[i][j]-a[i][j+1])] == -1) {
            f[i][j+abs(a[i][j]-a[i][j+1])] = f[i][j] + 1;
            Q.push({i, j+abs(a[i][j]-a[i][j+1])});
        }
        if (f[i+abs(a[i][j]-a[i+1][j+1])][j+abs(a[i][j]-a[i+1][j+1])] == -1) {
            f[i+abs(a[i][j]-a[i+1][j+1])][j+abs(a[i][j]-a[i+1][j+1])] = f[i][j] + 1;
            Q.push({i+abs(a[i][j]-a[i+1][j+1]), j+abs(a[i][j]-a[i+1][j+1])});
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