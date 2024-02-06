#include <bits/stdc++.h>
using namespace std;
// cây nhị phân tìm kiếm khi duyệt giữa thì sẽ ra 1 dãy tăng dần (không trùng nhau)

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ok = 1;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-1; i++) {
            if (a[i] >= a[i+1]) ok = 0;
        }
        cout << ok << endl;
    }
}