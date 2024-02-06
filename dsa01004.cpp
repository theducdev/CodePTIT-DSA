#include <bits/stdc++.h>

using namespace std;

int ok = 0, a[100], n, k;

void khoitao() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void in() {
    for (int i = 1; i <=k; i++) {
        cout << a[i];
    }
    cout << " ";
}

void sinhtohop() {
    int i = k;
    while (i > 0 && a[i] == n - k + i ) i--;
    if (i == 0) ok = 1;
    else {
        a[i]++;
        for( int j = i+1; j <= k; j++) {
            a[j] = a[j-1] + 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        khoitao();
        while(ok == 0) {
            in(); 
            sinhtohop();
        }
        ok = 0;
        cout << endl;
    }
}