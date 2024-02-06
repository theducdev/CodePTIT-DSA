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
        int n; cin >> n;
        set <ll> a;
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            a.insert(x);
        }
        vector <ll> b(a.begin(), a.end());
        int z = b.size();
        cout << b[z-1] - b[0] + 1 - a.size(); 
        cout << endl;
    }
    
}