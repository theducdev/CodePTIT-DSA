#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair <int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        pair <int, int> a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort (a, a+n, cmp);
        int ans = -1, Min = a[0].second, k = a[0].first;
		for (int i = 1; i < n; i++)
		{
			if (a[i].first > k)
				ans = max(ans, a[i].second - Min);
			if (Min > a[i].second)
			{
				Min = a[i].second;
				k = a[i].first;
			}
		}
		cout << ans << endl;

        
        cout << endl;
    }
}