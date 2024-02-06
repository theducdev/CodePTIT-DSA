#include <bits/stdc++.h>
using namespace std;

int tinh(string a, string b, string c)
{
    int f[a.size() + 1][b.size() + 1][c.size()+1] = {};
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            for (int k = 0; k < c.size(); k++) {
                if (a[i] == b[j] && b[j] == c[k]) {
                    f[i+1][j+1][k+1] = f[i][j][k] +1 ;
                }
                else f[i+1][j+1][k+1] = max(f[i+1][j+1][k], max(f[i][j+1][k+1], f[i+1][j][k+1]));
            }
        }
    }
    return f[a.size()][b.size()][c.size()];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        string a, b, c;
        cin >> a >> b >> c;
        cout << tinh(a, b, c);
        cout << endl;
    }
}
