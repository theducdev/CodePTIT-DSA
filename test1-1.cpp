#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (1)
    {
        int n, k, s, d = 0;
        cin >> n >> k >> s;
        if (n < k)
        {
            cout << 0 << endl;
            continue;
        }
        if (n == 0 && k == 0 && s == 0)
            return 0;
        int a[k + 1];
        for (int i = 1; i <= k; i++)
            a[i] = i;
        while (1)
        {
            int x = 0;
            for (int i = 1; i <= k; i++)
                x += a[i];
            if (x == s)
                d++;
            int ok = 0;
            for (int i = k; i >= 1; i--)
            {
                if (a[i] != n - k + i)
                {
                    ok = 1;
                    a[i]++;
                    for (int j = i + 1; j <= k; j++)
                        a[j] = a[j - 1] + 1;
                    break;
                }
            }
            if (ok == 0)
                break;
        }
        cout << d << endl;
    }
}