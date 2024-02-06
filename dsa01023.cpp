#include <bits/stdc++.h>

using namespace std;

int ok = 0;
int n, k, a[100], b[100];

void khoitao() {
    for(int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void sinhtohop() {
    int i = k;
    while( i > 0 && a[i] == n - k + i) i--;
    if (i == 0 ) ok = 1;
    else {
        a[i]++;
        for(int j = i+1; j <= k; j++) {
            a[j] = a[j-1] + 1;
        }
    } 
}
int check() {
    for (int i = 1; i <= k; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

void in() {
    for (int i = 1; i <= k; i++) {
        cout << a[i]  << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        khoitao();
        for(int i = 1; i <= k; i++) {
            cin >> b[i];
        }
        int stt = 1;
        while (ok == 0 ) {
            if(check() == 1) {
                cout << stt;
                break;
            }
            else {
                stt++;
                sinhtohop();
            }
        }
        cout << endl;
    }
}