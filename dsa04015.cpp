#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector <ll> v;
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            v.push_back(x);
        }
        int z = lower_bound(v.begin(), v.end()-1, k) - v.begin();
        if (z == 0) z--;
        if (v[z] != k) z--;
        cout << z+1 << endl;

    }

}