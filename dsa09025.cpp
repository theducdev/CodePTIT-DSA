#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
int used[1005], truoc[1005];

void DFS(int u) {
    used[u] = 1;
    for (auto v : ke[u]) {
        if(!used[v]) {
            truoc[v] = u;
            DFS(v);
        }
    }
}

void induongdi(int s, int t) {
    DFS(s);
    if(used[t] == 0) cout << "-1" ;
    else {
        vector <int> ans;
        while(t!=s) {
            ans.push_back(t);
            t = truoc[t];
        }
        ans.push_back(s);
        reverse(ans.begin(), ans.end());
        for (auto x : ans) cout << x << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for(int i = 1; i <= 1005; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        memset(truoc, 0, sizeof(used));
        int n, m, s, k; cin >> n >> m >> s >> k;
        for (int i = 1; i <= m; i++) {
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
        }
        induongdi(s, k);
        cout << endl;
        
    }
}