#include <bits/stdc++.h>

using namespace std;
vector <int> ke[1005];

int main() {   
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for(int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        for (int i = 1; i <= n; i++) {
            cout << i << ": ";
            for (auto x : ke[i]) cout << x << " ";
            cout << endl;
        }
        for (int i = 1; i <= n; i++) {
            ke[i].clear();
        }
        
    }
}