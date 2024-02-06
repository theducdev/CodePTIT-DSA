#include <bits/stdc++.h>

using namespace std;



int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+1], b[n+1];
        for (int i = 1; i <= n; i++ ) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++ ) {
            b[i] = a[i];
        }
        sort(b+1, b+n+1);
        int ok = 1;

        for(int i = 1; i <= n; i++) {
            if (a[i] != b[i] && a[i] != b[n-i+1]) {
                ok = 0;
                break;
            }
        }
        
        if (ok == 1) cout << "Yes" << endl;
        else cout << "No" << endl;

    }
}