#include <bits/stdc++.h>
using namespace std;

int c[105][25005];
int tinh(int b, int n, int a[])
{
    memset(c, 0, sizeof(c));
    for (int j = 1; j <= b; ++j)
        c[0][j] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            c[i][j] = c[i - 1][j];
            if (a[i] <= j)
            {
                c[i][j] = max(c[i][j], c[i - 1][j - a[i]] + a[i]);
            }
        }
    }
    return c[n][b];
}

int main()
{

    int b, n;
    cin >> b >> n;
    int w[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    cout << tinh(b, n, w);
}