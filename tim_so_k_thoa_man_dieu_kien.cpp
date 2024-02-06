#include <bits/stdc++.h>
using namespace std;
// hàm check kiểm tra xem xâu đó có bị lặp lại chữ số nào không
bool check(string s) {
    // mảng f dùng để đếm số lần xuất hiện của từng chữ số
    int f[7];
    memset(f,0,sizeof(f));
    for (int i = 0; i < s.size(); i++) {
        f[s[i] - '0']++;
    }
    // nếu thấy chữ số nào xuất hiện nhiều hơn 1 lần, sai luôn
    for (int i = 0; i <= 5; i++) {
        if (f[i]>1) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int l, r; cin >> l >> r;
        // biến cnt = 0 dùng để đếm số só thoả mãn
        int cnt = 0;
        // hàng đợi Q để chạy các số
        queue <string> Q;
        // thêm vào lần lượt các số 1,2,3,4,5
        Q.push("1");
        Q.push("2");
        Q.push("3");
        Q.push("4");
        Q.push("5");
        // chạy vô hạn
        while(!Q.empty()) {
            // lấy ra phần tử tmp đầu tiên của Q
            string tmp = Q.front(); Q.pop();
            // nếu phần tử đó > r thì dừng luôn
            if (stoi(tmp) > r) break;
            // nếu nó thoả mãn hết tất cả các đk, thì cnt++
            if (stoi(tmp) >= l && stoi(tmp) <= r && check(tmp)) cnt++;
            // thêm lần lượt số 0,1,2,3,4,5 vào cuối xâu đó, để tạo thành số mới, sau số push vào Q;
            Q.push(tmp + '0');
            Q.push(tmp + '1');
            Q.push(tmp + '2');
            Q.push(tmp + '3');
            Q.push(tmp + '4');
            Q.push(tmp + '5');
        }
        cout << cnt << endl;

    }
}