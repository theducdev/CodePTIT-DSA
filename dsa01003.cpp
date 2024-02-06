#include <bits/stdc++.h>

using namespace std;

int n,ok = 0, a[1000];

void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
}

void in () {
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
}

void permutationGen() {
    int i = n - 1;
    while(i > 0 && a[i] > a[i+1]) i--;
    if (i == 0) ok = 1;
    else {
        int j = n;
        while(a[j] < a[i]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + 1 + n);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        permutationGen();
        if(ok == 1) khoitao();
        in();
        ok = 0;
        cout << endl;

    }

}