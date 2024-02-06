#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, s, m; cin >> n >> s >> m;
        if(n < m || 6*(n-m) < m) cout << "-1";
        else if((m*s) % n == 0) cout << m*s/n;
        else cout << m*s/n+1;
        cout << endl;        
    }
}