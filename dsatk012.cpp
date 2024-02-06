#include <bits/stdc++.h>
using namespace std;
int a[31], b[31], ok = 0;
long long s;
long long sum;
int ans = -1;

bool cmp(int a, int b)
{
    return a > b;
}

void sinhtohop(int k, int n)
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0)
        ok = 1;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= k; i++)
            a[i] = i;
        if (ans == -1)
        {

            sum = 0;
            while (ok == 0)
            {
                cout << " ";
                for (int i = 1; i <= k; i++)
                {
                    sum += b[a[i]];
                }
                if (sum == s)
                {
                    ans = k;
                    break;
                }
                sum = 0;
                sinhtohop(k, n);
            }
            ok = 0;
        }
    }
    cout << ans;
}