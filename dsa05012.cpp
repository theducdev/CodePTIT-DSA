#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1e9+7;
ll f[1000][1000];

ll tinh(int n, int k) {
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) f[i][j] = 1;
            else f[i][j] = (f[i-1][j-1] + f[i-1][j])%m;
        }
    }
    return f[n][k];
}



int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        cout << tinh(n,k);
        cout << endl;
        
    }
}