#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool cmp(pair<ll, ll> a, pair<ll, ll> b ) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        pair <ll, ll> a[n];
        ll b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
            b[i] = a[i].first;
            
        }
        sort(b, b+n);
        for (int i = 0; i < n; i++) {
            if (a[i].first == b[0]) {
                cout << a[i].second;
                break;
            }
        }
        cout << endl;


    }
}
