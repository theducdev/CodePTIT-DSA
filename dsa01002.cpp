#include <bits/stdc++.h>

using namespace std;

int ok = 0, a[100], n, k;


void in() {
    for (int i = 1; i <=k; i++) {
        cout << a[i] << " ";
    }
}

void sinhtohop() {
    int i = k;
    while (i > 0 && a[i] == n - k + i ) i--;
    if (i == 0) {
        for (int i = 1; i <=k; i++) {
            a[i] = i;
    }

    }
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
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
        }
        sinhtohop();
        in(); 
        ok = 0;
        cout << endl;
    }
}