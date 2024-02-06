#include <bits/stdc++.h>

using namespace std;
long long m = 1e9 + 7;

long long dao(long long n) {
    long long dao = 0;
    while(n>0) {
        dao = dao*10 + n%10;
        n/=10;
    }
    return dao;
}

long long powMod(long long n, long long k) {
    if (k == 0) return 1;
    long long x = powMod(n, k/2);
    if(k%2==0) return x*x%m;
    return n*(x*x%m)%m;
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        if (n!=0)
        cout << powMod(n, dao(n)) << endl;
        
    }
}
