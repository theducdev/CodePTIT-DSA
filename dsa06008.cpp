#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int count(ll x, ll y[], ll n, ll a[])
{
	if (x == 0)
		return 0;
	if (x == 1)
		return a[0];
	int it = upper_bound(y, y + n, x) - y;
	int ans = n - it;
	ans += (a[0] + a[1]);
	if (x == 2)
		ans -= (a[3] + a[4]);
	if (x == 3)
		ans += a[2];
	return ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n, m; cin >> n >> m;
        ll x[n], y[m], dem = 0, a[5] = {};
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> y[i];
        }
        for (int i = 0; i < n; i++)
		{
			if (y[i] < 5)
				a[y[i]]++;
		}
        sort(y, y+m);
        for (int i = 0; i < m; i++)
			dem += count(x[i], y, n, a);
		cout << dem << endl;


        cout << endl;


    }
}
