#include <bits/stdc++.h>
using namespace std;

struct capso {
    int dau, cuoi;
};
bool cmp(capso a, capso b) {
    return a.cuoi < b.cuoi;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        capso a[n];
        int f[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].dau >> a[i].cuoi; 
        }
        sort(a, a+n, cmp);
        int ans = -1e9;
        for (int i = 0; i < n; i++) f[i] = 1;
        for (int i = 1; i < n; i++) {
            for (int j = 0 ; j <= i; j++) {
                if (a[j].cuoi < a[i].dau) {
                    f[i] = max (f[j] + 1, f[i]);
                }
            }
            ans = max(ans, f[i]);
        }
        cout << ans;
        cout << endl;
    }
}