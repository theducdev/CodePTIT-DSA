#include <bits/stdc++.h>
using namespace std;

int OK = 0, b[25], n;

int check(int b[], int n) {
    for(int i = 1; i <=n; i++) {
        if (b[i] != b[n-i+1]) return 0;
    }
    return 1;
}

void in() {
    for (int i = 1; i<=n; i++) cout << b[i] << " ";
    cout << endl;
}

void binaryGen() {
    int i = n;
    while ( i > 0 && b[i] == 1) {
        b[i] = 0;
        i--;
    }
    if ( i == 0) OK = 1;
    else b[i] = 1;
}

int main () {
    cin >> n;
    while(!OK) {
        if(check(b, n)) in();
        binaryGen();
    }
}