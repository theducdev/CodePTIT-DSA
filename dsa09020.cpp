#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin >> n;
    int a[n+2][n+2];
    memset(a, 0, sizeof(a));
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string s; getline(cin, s);
        istringstream ss(s);
        int j = 1;
        while(ss >> j) a[i][j] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}