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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int res = -1e9, dem = 0;
        for (int i = 1; i < n; i++) {
            if(a[i+1] > a[i]) {
                if (a[i-1] > a[i]) {
                    res = max(res, dem);
                    dem = 0;
                }
                dem++;
            }
            else if (a[i+1] < a[i]) {
                dem++;
            }
        }
        
        cout << max(res, dem) +1;
        cout << endl;
    }
}
