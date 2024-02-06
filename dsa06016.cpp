#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {   
        int n , m; cin >> n >> m;
        vector <ll> a;
        for (int i = 0; i < n+m; i++) {
            ll x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        
        for (auto x : a) cout << x << " ";
        cout << endl;
    }
    
}