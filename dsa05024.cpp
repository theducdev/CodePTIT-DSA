#include <bits/stdc++.h>
using namespace std;
int m = 1e9+7;
int a[10005], n, k;
int f[100002];
int tinh() {
    f[0] = 1;
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < n; j++) {
            if(i - a[j] >= 0) {
                f[i] += f[i-a[j]];
                f[i]%=m;
            }
        }
    }
    return f[k];
}

int main() {
    int t; cin >> t;
    while(t--) {
        memset(f, 0, sizeof(f));
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << tinh()<<endl;
    }

}