#include <bits/stdc++.h>

using namespace std;

int n, ok = 0 ;
int a[25];

void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 6;
    }
}
// hàm sinh nhị phân
void sinh() {
    int i = n;
    while (i > 0 && a[i] == 8) {
        a[i] = 6;
        i--;
    }
    if (i == 0 ) ok = 1;
    else a[i] = 8; 
}

void in() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;


}
// kiểm tra xem có 2 chữ số 8 đứng cạnh nhau không?
int check88() {
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[i+1] && a[i] == 8) return 0;
    }
    return 1;
}


// kiểm tra xem chữ só đầu có là 8, và chữ số cuối có là 6 không ?
int check86() {
    if (a[n] == 6 && a[1] == 8) return 1;
    return 0;
}
// kiểm tra xem có 3 chữ số 6 đứng cạnh nhau không ?
int check666() {
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[i+1] && a[i+1] == a[i+2] && a[i+2] == a[i+3] && a[i] == 6) return 0;
    }
    return 1;
}


int main() {
        cin >> n;
        khoitao();
        while( ok == 0) {
            sinh();
            if(check666() && check86() && check88()) in();
        }
        ok = 0;
}
