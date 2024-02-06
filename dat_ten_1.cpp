#include <bits/stdc++.h>

using namespace std;
// biến ok dùng để dừng hàm sinh tổ hợp
// mảng a dùng để lưu phần tử sau sinh
int ok = 0, a[100], n, k;
// khởi tạo cấu hình ban đầu từ 1 đến k
void khoitao() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

// hàm sinh tổ hợp từng cấu hình
void sinhtohop() {
    // chạy từ cuối về đầu
    int i = k;
    // chạy cho đến khi tìm thấy phần tử khác n-k+i
    while (i > 0 && a[i] == n - k + i ) i--;
    // nếu đã chạy hết mà k tìm thấy thì dừng
    if (i == 0) ok = 1;
    // nếu tìm thấy thì
    else {
        // tăng phần tử đó lên 1 đơn vị
        a[i]++;
        // duyệt từ phần tử liền sau nó đến hết, phần tử liền sau bằng phần tử trước đó cộng thêm 1
        for( int j = i+1; j <= k; j++) {
            a[j] = a[j-1] + 1;
        }
    }
}

int main() {
    cin >> n >> k;
    // khởi tạo
    khoitao();
    // tạo set để lưu các phần tử đề cho theo thứ tự, loại phần tử trùng
    set <string> input;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        input.insert(s);
    }
    // vector v lưu các phần tử trong set, để dễ truy cập
    vector <string> v;
    for (auto x : input ) v.push_back(x);
    n = v.size();
    // duyệt cho đến khi hết tất cả các cấu hình
    while(ok == 0) {
        // in ra phần tử của v theo đúng thứ tự của cấu hình
        for (int i = 1; i <= k; i++) cout << v[a[i] - 1] << " ";
        cout << endl; 
        sinhtohop();
    } 
}