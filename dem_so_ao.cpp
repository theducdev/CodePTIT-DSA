#include <bits/stdc++.h>
using namespace std;

// mảng x và y dùng để lưu các phần tử xoay quanh 
int x[8]={-1,-1,-1,0,1,1,1,0};
int y[8]={-1,0,1,1,1,0,-1,-1};
char a[105][105];
int n, m;
// hàm DFS dùng để loang ao
void DFS(int i, int j ) {
    // cho a[i][j] thành '.' luôn
    a[i][j] = '.';
    for (int k = 0; k <= 7; k++) {
        // điều kiện để nó không vượt ra ngoài ma trận
        if (a[i+x[k]][j+y[k]] == 'W' && i+x[k]>0 && i+x[k] <= n && j+y[k] >0 && j+y[k]<=m) {
            DFS(i+x[k],j+y[k]);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 'W') {
                cnt++;
                DFS(i,j);
            }
        }
    }
    cout << cnt << endl;
    
}