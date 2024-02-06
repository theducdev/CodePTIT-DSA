#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        long long ans = 0;
        for (int i = 0; i < n; i++ ) {
            for (int j = 1; j <= n - i; j++) {
                ans += stoll(s.substr(i,j));                
            }
        }
        cout << ans << endl;
    }
}