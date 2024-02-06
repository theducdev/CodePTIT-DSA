#include <bits/stdc++.h>

using namespace std;

int n, k, ok = 0;
int b[25];

void khoitao() {
    for (int j = 1; j <= n; j++) {
        b[j] = 0;
    }
}

void in() {
    for (int j = 1; j <= n; j++) {
        cout << b[j];
    }
}

void check() {
    int dem = 0;
    for (int j = 1; j <= n; j++) {
        if (b[j] == 1) dem++;
    } 
    if(dem == k) {
        in();
        cout << endl;
    }
}

void sinh() {
    int i = n;
    while ( i > 0 && b[i] == 1) {
        b[i] = 0;
        i--;
    }
    if ( i == 0 ) ok = 1;
    else b[i] = 1;

}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        khoitao();
        while ( ok == 0) {
            sinh();
            check();
        }
        ok = 0;
     }

}