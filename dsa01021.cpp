#include <bits/stdc++.h>

using namespace std;

int ok = 0;
int n, k, a[100];
// sinh to hop
void sinhtohop() {
    int i = k;
    while (i > 0 && a[i] == n - k + i ) i--;
    if (i == 0) {
        ok = 1;

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
        // khai bao set de luu cac chu so da xuat hien o to hop ban dau
        set <int> bandau;       
        // khai bao set de luu cac so da xuat hien o to hop ban dau + ke tiep
        set <int> ketiep;      
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
            bandau.insert(a[i]);
            ketiep.insert(a[i]);
        }
        // sỉnh ra to hop tiep theo
        sinhtohop();
        // luu cac so cua to hop nay vao ketiep
        for (int i = 1; i <= k; i++) {
            ketiep.insert(a[i]);
        }
        if (ketiep.size() - bandau.size() != 0) cout << ketiep.size() - bandau.size();
        else cout << k;
        cout << endl;
    }
}