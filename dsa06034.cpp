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
        long long s = 0;
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto i : m)
        {
            if (i.first * 2 == k)
            {
                s += i.second * (i.second - 1);
            }
            else
                s += i.second * m[k - i.first];
        }

        cout << s / 2;

        cout << endl;
    }
}