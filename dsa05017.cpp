#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        int inc[n], dec[n];
        for (int i = 0; i < n; i++) {cin >> a[i];inc[i] = dec[i] = a[i];}
        
        for (int i = 0; i < n;i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] < a[i]) inc[i] = max(inc[i], inc[j] + a[i]);
            }
        }
        for (int i = n-1; i >= 0;i--) {
            for (int j = n-1; j >i; j--) {
                if (a[j] < a[i]) dec[i] = max(dec[i], dec[j] + a[i]);
            }
        }
        int ans = -1e9;
        for (int i = 0; i < n;i++) {
            ans = max(ans, inc[i] + dec[i] - a[i]);
        }
        cout << ans;
        




        cout << endl;
    }
}