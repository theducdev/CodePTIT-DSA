#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int f[100005];
    f[1] = 0;
    f[2] = 1;
    f[3] = 1;
    for (int i = 4; i <= 100000; i++) {
        f[i] = f[i-1] + 1;
        if(i%2==0) f[i] = min(f[i], f[i/2]+1);
        if(i%3==0) f[i] = min(f[i], f[i/3]+1);
    }


    while (t--)
    {
        int n; cin >> n;
        cout << f[n] << endl;
    }
}
