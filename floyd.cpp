#include <bits/stdc++.h>
using namespace std; 

int main() {
    int D[105][105];
    // nhập n đỉnh và m cạnh
    int n, m, u, v; cin >> n >> m;
    // khởi tạo ma trận D[n][n] toàn phần tử max, D[i][i] = 0
    // ma trận D dùng để lưu khoảng cách nhỏ nhất để đi từ i đến j
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) D[i][j] = 1e9;
        D[i][i] = 0;
    }
    // nhập trọng số của đường đi
    while(m--) {
        int w; cin >> u >> v >> w;
        D[u][v] = D[v][u] = w;
    }
    // k là đỉnh trung gian

    for (int k = 1; k <= n; k++) {
        // i là đỉnh bắt đầu
        for (int i = 1; i <= n; i++) {
            // j là đỉnh kết thúc
            for (int j = 1; j <= n; j++) {
                // nếu đi từ i đến j bằng cách đi từ i đến k, rồi từ k đến j ngắn hơn đi trực tiếp i đến j, thì cập nhật 
                if (D[i][j] > D[i][k] + D[k][j]) D[i][j] = D[i][k] + D[k][j];
            }
        }
    }
    int t; cin >> t;
    while(t--) {
        cin >> u >> v;
        cout << D[u][v] << endl;
    }
}