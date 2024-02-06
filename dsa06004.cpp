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
        int n, m; cin >> n >> m;
        map <int, int> a, b, c;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a[x]++; c[x]++;
        }
        for (int i = 0; i < m; i++) {
            int x; cin >> x;
            b[x]++; c[x]++;
        }
        for (auto x : c) cout << x.first << " ";
        cout << endl;
        for(auto x : a) {
            if (b[x.first] > 0) cout << x.first << " ";
        } 
        cout << endl;
    }
    
}