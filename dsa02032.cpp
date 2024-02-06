#include <bits/stdc++.h>
using namespace std;
int a[25], b[25], ok = 0, n, x, dem = 0;


void in(int i) {
    cout << " {";
    for (int m = 1; m <= i-1; m++ ) cout << a[m] << " ";
    cout << a[i] <<"}";
}


void Trydem(int i, int j, int s){
    for (int ii = j; ii <= n; ii++) {
        a[i] = b[ii];
        s+= b[ii];
        if (s == x) dem++;
        else if(s < x) Trydem(i+1, ii, s);
        s-=b[ii];
    }
}

void Try(int i, int j, int s){
    for (int ii = j; ii <= n; ii++) {
        a[i] = b[ii];
        s+= b[ii];
        if (s == x) in(i);
        else if(s < x) Try(i+1, ii, s);
        s-=b[ii];
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        cin >> n >> x;
        for (int i = 1; i <= n; i++) cin >> b[i];
        sort(b+1, b+1+n);
        Trydem(1,1,0);
        if (dem == 0) cout <<"-1"; 
        else {
            cout << dem;
            Try(1,1,0);
        }
        dem = 0;
        cout << endl;
    }
}