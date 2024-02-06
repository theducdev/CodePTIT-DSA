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
            int x; cin >> x;
            a.insert(x);
        }
        vector <ll> b(a.begin(), a.end());
        if(b.size() != 1) cout << b[0] << " " << b[1];
        else cout << "-1";
        cout << endl;
    }
    
}