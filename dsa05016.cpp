#include <bits/stdc++.h>
using namespace std;

long long dp(int n) {
    long long f[n+2];
    f[1] = 1;
    int i2= 1, i3 = 1, i5 = 1;
    for (int i = 2; i <= n ; i++) {
        f[i] = min(f[i2]*2, min(f[i3]*3, f[i5]*5));
        if (f[i] == f[i2]*2) i2++;
        if (f[i] == f[i3]*3) i3++;
        if (f[i] == f[i5]*5) i5++;
    }
    return f[n];
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << dp(n) << endl;
    }
}