#include <bits/stdc++.h>

using namespace std;

#define m 1000000007
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll a[n];
        for(int i = 0; i <n; i++) cin >> a[i];
        sort(a, a+n);
        ll max = 0;
        for(ll i = 0; i <n; i++) {
            max += a[i]*i;
            max%= m;
        }
        cout << max << endl;

        
    }    
    
}