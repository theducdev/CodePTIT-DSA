#include <bits/stdc++.h>
using namespace std;
int a[25],b[25], ok = 0, n, x;


void in() {
    int sum = 0;
    for (int i = 1; i<=n; i++) {
        sum+=b[i]*a[i];
    }
    if(sum %2 == 1 ) for (int i = 1; i<=n; i++) {
        if (a[i] == 1) cout << b[i] << " ";
    }
    cout << endl;
}

void binaryGen() {
    int i = n;
    while ( i > 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if ( i == 0) ok = 1;
    else a[i] = 1;
}

bool cmp(int a, int b) {
    return a > b;
}



int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> b[i];
        sort(b+1, b+1+n, cmp);
        while(ok == 0) {
            in(); binaryGen();
        }
        ok = 0;
        cout << endl;
    }
}