#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i <n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        long long min = 1e9;
        for (int i = 0; i < n - 1; i++) {
            if (min > a[i+1] - a[i]) min = a[i+1] - a[i];
        }
        cout << min;
   
        cout << endl;
        
    }
}