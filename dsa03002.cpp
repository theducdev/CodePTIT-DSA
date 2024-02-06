#include <bits/stdc++.h>

using namespace std;

int chuyendoiMin(string s) {
    int n = s.size();
    for (int i = 0; i <= n; i++) {
        if (s[i] == '6') s[i] = '5';
    }
    int so = 0;
    for (int i = 0; i <= n-1; i++) {
       so+= (s[i] - 48)*pow(10, n-i-1);
    }
    return so;
}

int chuyendoiMax(string s) {
    int n = s.size();
    for (int i = 0; i <= n; i++) {
        if (s[i] == '5') s[i] = '6';
    }
    int so = 0;
    for (int i = 0; i <= n-1; i++) {
       so+= (s[i] - 48)*pow(10, n-i-1);
    }
    return so;
}

int main() {
    string a, b; cin >> a >> b;
    cout << chuyendoiMin(a) + chuyendoiMin(b) << " " << chuyendoiMax(a) + chuyendoiMax(b);
}