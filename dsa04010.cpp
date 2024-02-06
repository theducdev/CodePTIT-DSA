#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        long long sum = 0, max = -99999;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (sum < 0) sum = 0;
            if (sum > max) max = sum;
        }
        cout << max;
        
        cout << endl;
    }
}