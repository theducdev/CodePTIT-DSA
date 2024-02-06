#include <bits/stdc++.h>
using namespace std;
int n, k, ans;
int c[11], used[11];
string a[11], b[11];

void solve()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            b[i][j] = a[i][c[j]];
        }
    }
    sort(b, b + n);
    int minn = stoi(b[0]);
    int maxx = stoi(b[n - 1]);
    ans = min(ans, maxx - minn);
}

void Try(int i)
{
    for (int j = 0; j < k; j++)
    {
        if (used[j] == 0)
        {
            c[i] = j;
            used[j] = 1;
            if (i == k - 1)
                solve();
            else
                Try(i + 1);
            used[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    ans = 1e9;
    memset(used, 0, sizeof(used));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    Try(0);
    cout << ans;

    cout << endl;
}