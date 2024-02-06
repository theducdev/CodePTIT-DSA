#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1000][1000];

int tinh(int n, int v, int a[], int c[])
{
    for (int i = 0; i < v; i++)
        f[0][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            f[i][j] = f[i - 1][j];
            if (a[i] <= j && f[i - 1][j] < f[i - 1][j - a[i]] + c[i])
                f[i][j] = f[i - 1][j - a[i]] + c[i];
        }
    }
    return f[n][v];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, n;
        cin >> n >> v;
        int a[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        cout << tinh(n, v, a, c);

        cout << endl;
    }
}