#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll sum = 0;
        for ( int i = 0; i < n-2; i++) {
            for (int j = i+1; j < n-1; j++) {
                int x = lower_bound(a+j+1, a+n, k - a[i] - a[j]) - a;
                sum += x - j - 1;
            } 
        }
        cout << sum;
        cout << endl;
    }
}