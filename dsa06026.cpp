#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 1; i > 0; i--)
    {
        int ok = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ok = 1;
            }
        }
        if (ok == 0)
            break;
        cout << "Buoc " << n - i << ": ";
        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }
}