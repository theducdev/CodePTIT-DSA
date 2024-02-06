#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int f[5003][5003];
    memset(f, 0, sizeof(f));
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        f[i][i] = 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            f[i][i + 1] = 1;
    }
    for (int i = 3; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            int k = j + i - 1;
            if (s[j] == s[k] && f[j + 1][k - 1])
                f[j][k] = 1;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (f[l - 1][r - 1])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}