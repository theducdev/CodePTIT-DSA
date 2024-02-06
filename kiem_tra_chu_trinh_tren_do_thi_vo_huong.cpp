// kiểm tra chu trình trên đồ thị vô hướng
#include <bits/stdc++.h>

using namespace std;
int ok = 0;

vector <int> ke[1005];
int used[1005], truoc[1005];
void DFS(int u, int start) {
    used[u] = 1;
    for (auto x : ke[u]) {
        if (!used[x]) {
            used[x] = 1;
            truoc[x] = u;
            DFS(x,start);
        }
        else if(used[x] && x == start && truoc[u] != start) {
            ok = 1;
            break;
        }
    }
}


int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            sort(ke[i].begin(), ke[i].end());
        }
        for (int i = 1; i <= n; i++) {
            DFS(i,i);
            memset(used, 0, sizeof(used));
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
        ok = 0;
    }


}
