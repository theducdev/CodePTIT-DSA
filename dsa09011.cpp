#include <bits/stdc++.h>
using namespace std;
int sodao = 0;
int a[505][505];
int y[8] = {-1,0,1,1,1,0,-1,-1};
int x[8] = {-1,-1,-1,0,1,1,1,0};
void DFS(int i, int j) {
    if (a[i][j] == 1) {
        a[i][j] = 0;
        for (int k = 0; k <=7; k++) {
            if (a[i+x[k]][j+y[k]] == 1 ) {
                DFS(i+x[k], j+y[k]);
            }
        }
        
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }  
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i][j] == 1) {
                    DFS(i,j);
                    sodao++;
                }
            }
        }      
        cout << sodao << endl;
        sodao = 0;
    }
}