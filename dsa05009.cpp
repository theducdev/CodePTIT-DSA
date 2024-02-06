
#include <bits/stdc++.h>

using namespace std;

int a[101], n, ok = 0;

void Try(int posa, long long s, long long nuatong) {
    if(ok==1) return ;
    for (int i = posa + 1; i <= n; i++) {
        if (s+a[i] == nuatong) {
            ok = 1;
            return;
        }
        else if(s + a[i] < nuatong) {
            Try(i, s + a[i], nuatong);
        }
    }
}


int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        long long tong = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            tong+=a[i];
        }
        if (tong %2 != 0) cout << "NO" << endl;
        else {
            sort(a+1, a+1+n);
            tong/=2;
            Try(1, 0, tong );
            if (ok == 1) cout << "YES" << endl;
            else cout << "NO"<< endl;
            ok = 0; 
        }

    }
}