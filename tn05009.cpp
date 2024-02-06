// kiểm tra chu trình trên đồ thị vô hướng
#include <bits/stdc++.h>

using namespace std;
vector <int> ans;
int ok = 0;
vector <int> ke[1005];
int used[1005], truoc[1005];

// void DFS(int u) {
//     stack <int> st;
//     st.push(u);
//     ans.pu
// }

void DFS(int u, int start) {
    if (ok == 1) return;
    used[u] = 1;
    ans.push_back(u);
    for (auto x : ke[u]) {
        if(used[x] && x == start && truoc[u] != start) {
            ok = 1;
        }
        else if (!used[x]) {
            used[x] = 1;
            truoc[x] = u;
            DFS(x,start);
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
        DFS(1,1);
        if(ok==0) cout <<  "NO";
        else {
            ans.push_back(1);
            for(auto x : ans ) cout << x << " ";
        }
        cout << endl;
        ok = 0;  
        ans.clear();
    }
}
