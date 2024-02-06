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
        ll a[n];
        for (int i = 0; i <n; i++) {
            cin >> a[i];
        }
        int ok = 0;
        sort(a, a+n);
        for (int i = 0; i < n -1; i++) {
            for(int j = i+1; j < n; j++) {
                long long k = a[i] * a[i] + a[j] * a[j];
				long long x = sqrt(k);
				if (x * x == k && binary_search(a + j + 1, a + n, x))
				{
					ok = 1;
					break;
				}
            }
        }
        if (ok == 1) cout << "YES";
        else cout << "NO";
   
        cout << endl;
        
    }
}
