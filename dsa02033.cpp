#include <bits/stdc++.h>

using namespace std;

int a[100], ok = 0, n;

void PermutationGen() {
    int i = n - 1;
    while(i > 0 && a[i] > a[i+1]) i--;
    if (i == 0) ok = 1; 
    else {
        int j = n;
        while(a[j] < a[i]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}


int check() {
    int check = 1;
    for (int i = 1; i <= n-1; i++) {
        if (abs(a[i] - a[i+1]) == 1) {
            check = 0;
            break;
        }
    }
    return check;
}

void in() {
    if (check()) {
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
    }
}



int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 1; i <= n; i++)  a[i] = i;
        while (ok == 0) {
            in();
            PermutationGen();
        }
        ok = 0;
        
    }   
}

