#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int k; cin >> k;
        string s; cin >> s;
        // do mảng chỉ có từ A-Z nên tạo mảng có 'Z' + 1 phần tử
        int f['Z'+1];
        // khởi tạo mảng f toàn 0
        memset(f, 0, sizeof(f));
        // đếm số lần xuất hiện của từng chữ trong s
        for (int i = 0; i < s.size(); i++) {
            f[s[i]]++;
        }
        // mảng Q được xếp theo thứ tự giảm dần (less)
        priority_queue <int, vector <int>, less <int>> Q;
        // push hết các phần tử khác 0 của f vào Q
        for (int i = 0 ; i <= 'Z'; i++) {
            if (f[i]!=0) Q.push(f[i]);
        }
        // giảm phần tử lớn nhất trong Q k lần, mỗi lần 1 đơn vị
        while(k--) {
            int x = Q.top(); Q.pop();
            x--;
            Q.push(x);
        }
        long long ans = 0;
        // tính tổng bình phương tất cả các phần tử trong Q
        while(!Q.empty() ){
            int x = Q.top(); Q.pop();
            ans+=pow(x,2);
        }
        cout << ans << endl;
    }
}