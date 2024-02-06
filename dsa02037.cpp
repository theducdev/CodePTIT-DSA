#include <bits/stdc++.h>
using namespace std;
int n, c[16][16],s=0, cmin = 1e9, MIN = 1e9, a[100];
int chuaxet[100];
void Try(int i) {
    if (s + cmin*(n-i+1) >= MIN) return;
    for (int j = 1; j <= n; j++) {
        if(chuaxet[j]) {
            a[i] = j;
            chuaxet[j] = 0;
            s+=c[a[i - 1]][a[i]];
            if (i == n) {
                if (s + c[a[n]][a[1]] < MIN) MIN = s + c[a[n]][a[1]];
            }
            else Try(i+1);
            s-=c[a[i - 1]][a[i]];
            chuaxet[j] = 1;
        }
    }
}




int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t; t=1;
    while(t--) {
        cin >> n;
        memset(chuaxet, 1 , sizeof(chuaxet));
        a[1] = 1;
        chuaxet[1] = 0;
        for(int i = 1; i<= n; i++) {
            for(int j = 1; j <=n; j++) {
                cin >> c[i][j];
                if (c[i][j] != 0) cmin = min(cmin, c[i][j]); 
            }
        }
        Try(2);
        cout << MIN;
    }
        
}