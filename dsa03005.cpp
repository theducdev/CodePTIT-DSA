#include <bits/stdc++.h>

using namespace std;



int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >>k;
        long long a[n];
        for (int i =0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++) {
            if ( i < min(k, n-k) ) sum1+= a[i];
            else sum2+=a[i];
        }
        cout << sum2 - sum1 << endl;

    }

    
}