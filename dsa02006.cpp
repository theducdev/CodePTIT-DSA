#include <bits/stdc++.h>

using namespace std;
// mảng a dùng để lưu các phần tử bài cho
// mảng b dùng để lưu các phần tử kết quả
int n, k, a[101], b[101], ok;
// posa là vị trí của phần tử mảng a
// posb là vị trí của phần tử mảng b
// s là tổng hiện tại
void Try(int posa, int posb, int s) {
    // chạy cho đến hết các phần tử của a
    for(int i = posa +1; i <= n; i++) {
        // kiểm tra xem tổng hiện tại + phần tử đó của a có bằng k không
        if(s + a[i] == k) {
            // nếu bằng thì cho ok = 1 tức là đã có tìm thấy cấu hình
            ok = 1;
            // gán phần tử đó vào b rồi in
            b[posb + 1] = a[i];
            cout << "[" << b[0];
            for (int j = 1; j<= posb + 1; j++) cout << " " << b[j];
            cout << "] ";

        }
        // nếu chưa bằng thì tiếp tục quay lui cho đến khi bằng
        else if (s + a[i] < k) {
            b[posb + 1] = a[i];
            Try(i, posb + 1, s + a[i]);
        }
    }
    
}

int main() {
    int t; cin >> t;
    while(t--) {
        ok = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+1+n);
        Try(0, -1, 0);
        if(ok == 0) cout << -1 << endl;
        cout << endl;
        
    }
   
}