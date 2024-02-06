#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t;
    cin >> t;
    stack<long long> ans;
    while (t--)
    {
        cin >> s;
        long long n;
        if (s == "PUSH")
        {
            cin >> n;
            ans.push(n);
        }
        else if (s == "POP")
        {
            if (!ans.empty())
            {
                ans.pop();
            }
        }
        else if (s == "PRINT")
        {
            if (!ans.empty())
            {
                long long x = ans.top();
                cout << x;
                cout << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
    }
}