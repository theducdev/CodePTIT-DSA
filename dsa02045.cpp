#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, x[30]; 
string s;
void Try(int i)
{
    for (int j = x[i - 1] + 1; j <= n; ++j)
    {
        x[i] = j;
        for (int k = 1; k <= i; ++k)
        {
            cout << s[x[k] - 1];
        }
        cout << " ";
        if (i < n)
            Try(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        Try(1);
        cout << endl;
    }
}
