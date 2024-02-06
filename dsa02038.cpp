#include <bits/stdc++.h>
using namespace std;

int a[20], n,k, ok = 0;
vector <int> b;

void in() {
    for (int i = 1; i <= k; i++) cout << b[a[i]-1] << " ";
    cout << endl;
}


void CombinationGen() {
    int i = k;
    while(i > 0 && a[i] == n-k+i) i--;
    if (i == 0) ok = 1;
    else {
        a[i]++;
        for (int j = i+1; j <= n; j++) a[j] = a[j-1] +1;
    }
}


int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >>  k;
        for (int i = 1; i <= k; i++) a[i] = i;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        while(ok == 0) {
            in();
            CombinationGen();
        }
        ok = 0;
        b.clear();
    }
}