#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1e9 + 7;
ll a[105][50005];


int main() {
    ios_base::sync_with_stdio(0);
    for(int i = 0; i <101; i++) a[i][0] = 0;
    for(int j = 0; j < 50005; j++) a[0][j] = 0;
    for(int j = 1; j <= 9; j++) a[1][j] = 1;
    for (int i = 1; i <= 100; i++) {
        for (int so = 0; so <= 9; so++) {
            for (int j = so; j <= 50000; j++) {
                a[i][j] = (a[i][j]%m + a[i-1][j-so]%m)%m;
            }
        }
    }

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        cout << a[n][k];
        cout << endl;
    }
}