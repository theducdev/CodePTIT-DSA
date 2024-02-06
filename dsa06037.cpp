#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool cmp(ll a, ll b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n + 1];
        vector<ll> daymax(n + 3), daymin(n + 3);
        ll min = 1e9 + 7;
        ll max = -1e9 - 7;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
            daymax[i] = max;
        }
        for (int i = n; i >= 1; i--)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
            daymin[i] = min;
        }
        vector<ll> ans;
        for (int i = 1; i <= n - 1; i++)
        {
            if (daymax[i] <= daymin[i + 1])
            {
                ans.push_back(i);
            }
        }
        cout << ans.size();
        if (ans.size() == 0)
        {
            cout << endl;
        }
        else
        {
            cout << endl;
            for (auto x : ans)
                cout << x << " ";
        }
        cout << endl;
    }
}
