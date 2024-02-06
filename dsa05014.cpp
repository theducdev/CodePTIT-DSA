#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    ll f[101];
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= 100; i++ ) {
        f[i] = 0;
        for (int j = 0; j < i; j++ ) {
            f[i]+=(f[j]%m*f[i-j-1]%m)%m;
        }
    }
    while (t--)
    {
        int n; cin >> n;
        cout << f[n];
        cout << endl;
        
    }
}