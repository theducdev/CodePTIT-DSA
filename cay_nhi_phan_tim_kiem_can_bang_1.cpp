#include <bits/stdc++.h>
using namespace std;
// để tạo cây nhị phân tìm kiếm cân bằng thì sắp xếp lại mảng theo thứ tự tắng dần
// node gốc chính là node ở chính giữa (đầu+cuối)/2
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a+1, a+1+n);
        cout << a[(1+n)/2] << endl;
    }
}
