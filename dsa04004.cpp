#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int Find(int n, ll k) {
    if (k % 2 == 1) return 1;
    if (k == pow(2, n-1)) return n;
    if (k < pow(2, n-1)) return Find(n-1,k);
    return Find(n-1, k-pow(2,n-1));
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; ll k;
        cin >> n >> k;
        cout << Find(n, k) << endl;

    }

}