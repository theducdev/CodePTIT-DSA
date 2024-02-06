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
        int n; cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n - 1 ; i++) {
            int k = i;
            for (int j = i+1; j < n; j++) {
                if (a[j] < a[k]) {
                    k = j;
                }
            }
            if (k != i) cnt++;
            swap(a[i], a[k]);
            
        }
        cout << cnt;
        cout << endl;
    }
    
}