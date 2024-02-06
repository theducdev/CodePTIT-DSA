#include <bits/stdc++.h>
using namespace std;
int a[505][505], f[505][505],n, m;

int qhd()
{
    int i, j, ans = 0;
    
    f[1][1] = a[1][1];
    for (int q = 2; q <= m; q++)  
    {f[1][q]=a[1][q] + f[1][q-1];}
    for (int p = 2; p <= n; p++)  f[p][1]=a[p][1] + f[p-1][1];
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= m; j++)
        {
            
            f[i][j] = a[i][j] + min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1]));

        }
    }
    return f[n][m];
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
    // memset(f, 0, sizeof(f));
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << qhd() << endl;
    }
}