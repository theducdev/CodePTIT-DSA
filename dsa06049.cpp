#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long dem = 0;
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            int x = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            dem += x - i - 1;
        }
        cout << dem;

        cout << endl;
    }
}
