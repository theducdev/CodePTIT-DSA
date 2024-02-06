#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k; cin >> n >> k;
        ll a[n+5];
        map <ll,ll> mp; 
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        ll sum = 0;
        int ok = 0;
        mp[0] = 1;
        for(ll i = 0; i < n; i++) {
            sum+=a[i];
            if (mp[sum-k]) {
                ok = 1; break;
            }
            else mp[sum]++;
        }
        if (ok==1 || k == a[0]) cout << "YES";
        else cout << "NO";
        cout << endl;
        
    }
}