#include <bits/stdc++.h>
using namespace std;

int qhd(int n, int a[]) {
    int daytang[n+1], daygiam[n+1];
    daytang[0] = 1;
    daygiam[n-1] = 1;
    for (int i = 1; i <= n ; i++) {
        if (a[i] > a[i-1]) daytang[i] = daytang[i-1] + 1;
        else daytang[i] = 1;
    }
    for (int i = n - 2; i >= 0 ; i--) {
        if (a[i] > a[i+1]) daygiam[i] = daygiam[i+1] + 1;
        else daygiam[i] = 1;
    }
    int ans = daytang[0] + daygiam[0] - 1;
    for (int i = 1; i < n; i++) {
        ans = max(ans, daytang[i] + daygiam[i] - 1);
    }
    
    return ans;

    
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << qhd(n, a) << endl;
    }
}