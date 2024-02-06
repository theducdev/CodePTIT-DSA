#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        long long p, q; cin >> p >> q;
        while(p != 0) {
            if (q%p == 0) {
                cout << "1/" << q/p;
                break;
            }
            else {
                long long x = q/p+1;
                cout << "1/" << x;
                p = p*x - q;
                q = x*q;
            }
            cout << " + ";
        }
        cout << endl;
    }
}