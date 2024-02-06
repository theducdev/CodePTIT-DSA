#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        vector <int> ans;
        for (int i = 0; i < n+m; i++) {
            int x; cin >> x;
            ans.push_back(x);
        }
        sort(ans.begin(), ans.end());
        for (auto x : ans) cout << x <<" ";
        cout << ans[k-1] << endl;

    }

}