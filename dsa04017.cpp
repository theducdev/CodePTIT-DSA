#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map <ll, int> m;
        ll a[n+5], b[n+5];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n-1; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < n-1; i++) {
            if(a[i]!=b[i]) {
                cout << i+1 << endl;
                break;
            }
        } 
    }

}