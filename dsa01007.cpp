#include <bits/stdc++.h>

using namespace std;

int n, ok = 0 ;
char a[25];

void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 'A';
    }
}

void sinh() {
    int i = n;
    while (i > 0 && a[i] == 'B') {
        a[i] = 'A';
        i--;
    }
    if (i == 0 ) ok = 1;
    else a[i] = 'B'; 
}

void in() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << " ";


}




int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        khoitao();
        while( ok == 0) {
            in();
            sinh();
        }
        ok = 0;
        cout << endl;
    }
}