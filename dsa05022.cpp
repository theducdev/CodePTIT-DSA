#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[105];

long long time(int n, int x, int y, int z) {
    f[1] = x;
    for (int i = 2; i <= n; i++) {
        if(i%2 == 0) f[i] = min( f[i-1]+x, f[i/2] + z);
        else f[i] = min(f[i-1] + x, f[(i+1)/2] + z +y);
    }
    return f[n];
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x, y, z; cin >> n >> x >> y >> z;
        cout << time(n,x,y,z);
        cout << endl;
        
    }
}