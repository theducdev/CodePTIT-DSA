#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};

int a[105][105], ok = 0, n;

char xuly(int k ) {
    string s = "DLRU";
    return s[k];
}

void Try(int i, int j, string s) {
    if (i == n && j == n) {
        ok = 1;
        cout << s << " ";
    }
    for (int k = 0; k <4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 > 0 && i1 <= n && j1 > 0 && j1 <= n && a[i1][j1] == 1){
            a[i][j] = 0;
            Try(i1, j1,s + xuly(k));
            a[i][j] = 1;
        }
    }
}




int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 1; i <= n; i++ ) {
            for(int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
        string s = "";
        if(a[1][1] == 1) {
            Try(1,1, s);
        } 
        if (ok == 0) cout << "-1" << endl;
        cout << endl;
        ok = 0;
    }
   
}