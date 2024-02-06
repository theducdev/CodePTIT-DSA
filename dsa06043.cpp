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
        int a[n+1];
        long long sum = 0;
        for (int i = 1; i <=n; i++) {
            cin >> a[i];
            sum+= a[i];
        }
        int ans = -1;
        long long tmp = 0;
        for (int i = 2; i <= n; i++) {
            tmp+=a[i-1];
            if (tmp == sum - tmp - a[i]) {
                ans = i ;
                break;
            }
        }
        cout << ans;
        
        
            
        cout << endl;
        
    }
}