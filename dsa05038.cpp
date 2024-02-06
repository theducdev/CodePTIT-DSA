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
    t = 1;
    while (t--)
    {
        int n; cin >> n;
        capso a[n];
        int f[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].dau >> a[i].cuoi; 
        }
        int ans = -1e9;
        for (int i = 0; i < n; i++) f[i] = 1;
        for (int i = 1; i < n; i++) {
            for (int j = 0 ; j <= i; j++) {
                if (a[j].dau < a[i].dau && a[j].cuoi < a[i].cuoi) {
                    f[i] = max (f[j] + 1, f[i]);
                }
            }
            ans = max(ans, f[i]);
        }
        cout << ans << endl;
        // for (int i = 0; i < n; i++) {
        //     cout << a[i].dau << " " << a[i].cuoi << " : " << f[i] << endl; 
        // }
        // cout << endl;
    }
}