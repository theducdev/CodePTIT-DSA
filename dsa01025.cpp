#include <bits/stdc++.h>

using namespace std;

int ok = 0;
int n, k, a[100], b[100];

void khoitao() {
    for(int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

// hàm sinh tổ hợp
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
// hàm in: nếu a[i] = 1 thì in A, tương tự ...
void in() {
    
    for (int i = 1; i <= k; i++) {
        if(a[i] == 1) cout << "A";
        else if(a[i] == 1) cout << "A";
        else if(a[i] == 2) cout << "B";
        else if(a[i] == 3) cout << "C";
        else if(a[i] == 4) cout << "D";
        else if(a[i] == 5) cout << "E";
        else if(a[i] == 6) cout << "F";
        else if(a[i] == 7) cout << "G";
        else if(a[i] == 8) cout << "H";
        else if(a[i] == 9) cout << "I";
        else if(a[i] == 10) cout << "J";
        else if(a[i] == 11) cout << "K";
        else if(a[i] == 12) cout << "L";
        else if(a[i] == 13) cout << "M";
        else if(a[i] == 14) cout << "N";
        else if(a[i] == 15) cout << "O";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        khoitao();
        while (ok == 0 ) {
            in(); sinhtohop();
            
        }
        ok = 0;
    }
}