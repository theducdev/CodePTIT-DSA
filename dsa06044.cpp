#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool cmp(ll a, ll b) {
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n+1];
        vector<ll> chan, le;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (i%2 == 0) chan.push_back(a[i]);
            else le.push_back(a[i]);
        }
        sort(chan.begin(), chan.end(), cmp);
        sort(le.begin(), le.end());
        int i = 0, j = 0;
        while(i < chan.size() || j < le.size()) {
            if (j < le.size()) cout << le[j] << " ";
            if (i < chan.size()) cout << chan[i] << " ";
            i++; j++;
        }
        cout << endl;
    }
}
