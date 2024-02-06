#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Print(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i].second;
    cout << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i].first = i + 1;
            v[i].second = n - v[i].first + 1;
        }
        Print(v);
        while (next_permutation(v.begin(), v.end()))
            Print(v);
        cout << "\n";
    }
    return 0;
}