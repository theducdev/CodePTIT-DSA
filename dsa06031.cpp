#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-k +1; i++) {
            int max = *max_element(a+i, a+i+k);
            cout << max << " ";  
        }
        cout << endl;
    }
}