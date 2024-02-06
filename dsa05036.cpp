#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        float a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
        int ans = 0;
        int f[n];
        f[0] = 1;
        for (int i = 0; i < n; i++) {
            f[i] = 1;
            for (int j = 0; j < i; j++) {
                if (a[j] < a[i] && b[j] > b[i]) {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
            ans = max(ans, f[i]);
        }
        cout << ans;
        cout << endl;
    }
}