#include <bits/stdc++.h>

using namespace std;

int n;
int b[100];

int ok = 0;

void khoitao() {
    for (int j = 1; j <= n; j++) {
        b[j] = 0;
    }
}

void in() {
    for (int j = 1; j <= n; j++) {
        cout << b[j];
    }
    for (int j = n; j >=1; j--) {
        cout << b[j];
    }
    cout << " ";
}

int check() {
    int OK = 1;
    for (int i = 1; i <= n; i++) {
        if (b[i] != b[n-i+1]) {
            OK = 0;
            break;
        }
    }
    return OK;

    
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
        int z; cin >> z;
        while(z/2 > 0) {
            n = z/2;
            khoitao();
            while(ok == 0) {
                in();
                sinh();
            }
        ok = 0;
        n*=2;

        }

       cout << endl;
   }


}