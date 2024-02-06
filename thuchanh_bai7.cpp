#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    int a[n+1], c[n+1]; 
    for (int i = 1; i <= n; i++) cin >> a[i] >> c[i];
    int f[n+1][m+1];
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(j >= a[i] ) {
                f[i][j] = max(f[i-1][j], f[i-1][j-a[i]] + c[i]);
            }
            else {f[i][j] = f[i-1][j];}
        }
    }
    cout << f[n][m];
    cout << endl;
    

}