#include <bits/stdc++.h>

using namespace std;
bool used[25];
vector<int> ds[25];

void Hamilton(int )

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s, k;
        cin >> n >> m >> s >> k;
        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            ds[x].push_back(y);
            ds[y].push_back(x);
        }
        memset(used, 0, sizeof(used));
        memset(truoc, 0, sizeof(truoc));
        for (int i = 1; i <= n; i++) sort(ds[i].begin(), ds[i].end());
        induongdi(s, k);
        for (int i = 1; i <= n; i++)
            ds[i].clear();
        cout << endl;
    }
}