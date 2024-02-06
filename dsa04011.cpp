#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll chuyen(string s)
{
    int n = s.length();
    ll sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum * 2 + (s[i] - '0');
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << chuyen(s1) * chuyen(s2) << endl;
    }
}