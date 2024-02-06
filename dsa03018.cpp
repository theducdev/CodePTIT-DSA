#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int ok = 0;
        for(int i = n/7; i >= 0; i--) {
            int b = n-7*i;
            if(b%4 == 0) {
                ok = 1;
                for (int q = 0; q < b/4; q++) cout << "4";
                for(int p = 0; p <i; p++) {
                    cout << "7";
                }
                break;
            }
        }
        if (ok == 0) cout << -1;
        cout << endl;

    }
}
