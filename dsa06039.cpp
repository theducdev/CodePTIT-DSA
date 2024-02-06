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
        ll n;
        cin >> n;
        map<ll, ll> m;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        ll ok = -1;
        for(int i=0;i<n;i++){
            if(m[a[i]]>=2){
                ok=a[i];
                break;
            }
        }
        if (ok == -1)
            cout << "NO";
        else
            cout << ok;
        cout << endl;
    }
}