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
        int n, k; cin >> n >>k;
        vector <ll> a;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        if(find(a.begin(), a.end(), k) != a.end()) cout << "1";
        else cout << "-1";
        cout << endl;
    }
    
}