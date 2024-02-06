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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int l = 0, r = n - 1;
        if (n % 2 == 1)
        {
            while (l != r)
            {
                cout << a[r] << " " << a[l] << " ";
                l++;
                r--;
            }
            cout << a[l];
        }
        else
        {
            while (l - r != 1)
            {
                cout << a[r] << " " << a[l] << " ";
                l++;
                r--;
            }
        }
        cout << endl;
    }
}