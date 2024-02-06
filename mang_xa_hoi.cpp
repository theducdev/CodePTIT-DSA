#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int ok = 1;
        int n, m; cin >> n >> m;
        vector <int> ke[n+1];
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        // vì khi x là bạn của y, y là bạn của z, thì x cũng phải là bạn của z, nên số bạn của x và y phải như nhau
        // nên ta chỉ cần kiểm tra đỉnh i và đỉnh x kề với nó, xem số đỉnh mà i kề có bằng số đỈnh mà x kề không
        for (int i = 1; i <= n; i++) {
            for (auto x : ke[i]) {
                if (ke[i].size() != ke[x].size()) {
                    ok = 0; break;
                }
            }
        }
        if (ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}