#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        long long a[n], b[m], c[k];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < k; i++) cin >> c[i];
        int i = 0, j = 0, t = 0;
        vector <long long> ans;
        while (i < n && j < m && t < k) {
            if (a[i] == b[j] && a[i] == c[t]) {
                ans.push_back(a[i]);
                i++; j++; t++;
            }
            if (a[i] < b[j]) i++;
            if (b[j] < c[t]) j++;
            if (c[t] < a[i]) t++;
        }
        if (ans.size() == 0) cout << "NO";
        else for (long long x : ans) cout << x << " ";
        cout << endl;
    }
}
