#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 123456789;

ll powMod(ll n, ll k) {
    if(k == 0) return 1;
    ll x = powMod(n, k/2);
    if (k%2== 0) return x*x%m;
    return n*(x*x%m)%m;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << powMod(2, n-1) << endl;
    }

}