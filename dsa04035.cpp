#include <bits/stdc++.h>

using namespace std;

int M = 1e9 + 7;
long long powMod(int n, long long k) {
    if (k==0) return 1;
    long long x = powMod(n,k/2);
    if(k%2==0) return x*x%M;
    return n*(x*x%M)%M;
}

int main() {
        int n; long long k;
        while(true) {
            cin >> n >> k;
            if (n == 0 && k == 0 ) break;
            cout << powMod(n,k) << endl;
        }
    
}
