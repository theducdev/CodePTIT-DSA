#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1e9+7;


ll tinh(int n) {
    ll dp[n+1][10] = {0};
    for (int i = 0; i <= 9; i++) dp[1][i] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = j; k <= 9; k++) {
                dp[i][j] = (dp[i][j] + dp[i-1][k])%m;
            }
        }
    }
    ll cnt = 0;
    for (int i = 0; i <= 9; i++) {
        cnt+=dp[n][i];
        cnt%=m;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << tinh(n);
        cout << endl;
        
    }
}