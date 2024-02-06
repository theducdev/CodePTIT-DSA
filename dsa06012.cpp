#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {   
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i]; 
        sort(a, a+n);
        for (int i = n-1;i >= n-k; i--) {
            cout << a[i] << " ";
        } 
        cout << endl;
    }
    
}