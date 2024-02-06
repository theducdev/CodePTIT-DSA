#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        int f[n + 1] = {0};
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        long long sum = 0;
        long long max = a[1];
        sum+=a[1];
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > max) {
                max = a[i];
                f[i] = a[i]*i;
            }
            else {
                f[i] = a[i] + f[i-1];
            }
            sum+=f[i];
            
        }
        cout << sum;
        cout << endl;
    }
}