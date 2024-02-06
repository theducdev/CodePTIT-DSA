#include <bits/stdc++.h>

using namespace std;

long long gt(int n) {
    long long s = 1;
    for (int i = 1; i <= n; i++)
    s *= i;
    return s;
}
long long C(int k, int n) {
    return  gt(n) / (gt(k)*gt(n - k));
}

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n; cin >> m >> n;
        int a[m][n];
        for (int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        cout << C(n-1,n+m-2);
        cout <<endl;
    }     
}