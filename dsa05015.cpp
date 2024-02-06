#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m = 1e9 + 7;

ll tinh(int n, int k) {
    ll f[n+1][k+1] = {};
    f[0][0] = 1;
    for (int i = 1; i <=n; i++) f[i][1] = i;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j<= k; j++) {
            f[i][j] = (f[i-1][j-1]*i)%m;
        }
    }
    return f[n][k];
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        cout << tinh(n,k);
        cout << endl;
    }
}