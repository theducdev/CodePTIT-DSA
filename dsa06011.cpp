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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long min = -9999999;
        long long sum;
        for (int i = 0; i < n-1; i++) {
            sum = a[i];
            for(int j = i + 1; j < n; j++) {
                sum += a[j];
                if (abs(sum) < abs(min) ) min = sum;
                sum -= a[j];
            }
        }
        cout << min;
        cout << endl;
    }
    
}