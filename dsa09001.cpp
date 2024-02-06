#include <bits/stdc++.h>

using namespace std;

bool used[1005];
vector <int> List[1005];

int main() {   
    int t; cin >> t;
    while(t--) {
        memset(used, 0, sizeof(used));
        for (int i = 0; i < 1005;i++) List[i].clear();
        int n, m; cin >> n >> m;
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        for(int i = 1; i <= n; i++) {
            cout << i << ": ";
            for (auto x : List[i]) cout << x << " ";
            cout << endl;
        }
        cout << endl;
    }    
}