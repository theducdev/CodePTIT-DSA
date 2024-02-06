#include <iostream>
#include <map>
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
        ll max = -1;
        for (int i = 0; i < n; i++)
        {
            if (max < m[a[i]])
                max = m[a[i]];
        }
        if (max > n / 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (m[a[i]] == max)
                {
                    cout << a[i];
                    break;
                }
            }
        }
        else
            cout << "NO";
        cout << endl;
    }
}