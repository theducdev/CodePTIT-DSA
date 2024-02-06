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
    while (i > 0 && a[i] == 'H') {
        a[i] = 'A';
        i--;
    }
    if (i == 0 ) ok = 1;
    else a[i] = 'H'; 
}

void in() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;


}
// kiểm tra xem 2 chữ H có đứng cạnh nhau không
int checkHH() {
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[i+1] && a[i] == 'H') return 0;
    }
    return 1;
}

// kiểm tra xem kí tự đầu có là H và kí tự cuối có là A không
int checkHA() {
    if (a[n] == 'A' && a[1] == 'H') return 1;
    return 0;
}


int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        khoitao();
        while( ok == 0) {
            sinh();
            if(checkHA() && checkHH()) in();
        }
        ok = 0;
    }
}