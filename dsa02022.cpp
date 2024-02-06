#include <bits/stdc++.h>

using namespace std;

int n, ok = 0 ;
int a[25];

void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh() {
    int i = n;
    while (i > 0 && a[i] == 2) {
        a[i] = 0;
        i--;
    }
    if (i == 0 ) ok = 1;
    else a[i] = 2; 
}

void in() {
    cout << a[1] << a[2] << "/" << a[3] << a[4] << "/" << a[5] << a[6] << a[7] << a[8];
    cout << endl;
}

int checkthang() {
    if (a[3] == 0 && a[4] == 2) return 1;
    return 0;
}

int checkngay() {
    if (a[1] == 0 && a[2] == 0) return 0;
    return 1;
}
int checknam() {
    if (a[5] ==0 ) return 0;
    return 1;
}



int main() {
        n = 8;
        khoitao();
        while( ok == 0) {
            sinh();
            if(checkngay() && checkthang() && checknam() ) in();
        }
        ok = 0;
}
