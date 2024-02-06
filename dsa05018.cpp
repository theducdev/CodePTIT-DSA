#include <bits/stdc++.h>
using namespace std;

int check(string s) {
    int n = s.size();
    for(int i = 0; i <= n/2; i++) {
        if (s[i] != s[n-1-i]) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = -1e9;
        for (int i = 0; i < n-1; i++ ) {
            for (int j = 1; j <= n; j++) {
                if(check(s.substr(i,j))) {
                    int ans1 = s.substr(i,j).size();
                    ans = max(ans, ans1);
                }
            }
        }
        cout << ans << endl;
    }
}