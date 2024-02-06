#include <bits/stdc++.h>
using namespace std;
// mảng ok dùng để kiểm tra xem số đó đã được dùng chưa, dùng rồi thì gán bằng 1
int ok[15] = {0};
int n, k;
// mảng a dùng để quay lui hoán vị
// mảng x dùng để lưu ma trận bài cho
int a[15], x[15][15];
// vector v dùng để lưu kết quả của bài toán
vector <int> v;


// quay lui hoán vị từ 1 đến n, sau đó tính tổng các số x[i][a[i]] xem có bằng k không? 
void Try(int i) {
    // biến j chạy từ 1 đến n là các phần tử của mảng a
    for (int j = 1; j <= n; j++) {
        if(ok[j] == 0) {
            a[i] = j;
            ok[j] = 1;
            if (i == n) {
                int sum = 0;
                // tính tổng x[i][a[i]] xem có bằng k không, nếu bằng thì lần lượt push các phần tử của a vào v
                for (int l = 1; l <= n; l++) sum+=x[l][a[l]];
                if (sum == k) {
                    for (int l = 1; l <= n; l++) v.push_back(a[l]);
                }
            }
            // nếu chưa bằng thì tiếp tục quay lui phần tử tiếp theo của mảng
            else Try(i+1);
            // sau khi chạy xong 1 nhánh thì chuyển thành chưa dùng số j
            ok[j] = 0;
        }
    }


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >>k;
    for (int i = 1; i <=n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> x[i][j];
        }
    }
    Try(1);
    cout << v.size()/n;
    for (int i = 0; i < v.size(); i++) {
        // in n phần tử sau đó xuống dòng 1 lần
        if (i % n == 0) cout << endl;
        cout << v[i] << " ";
    }


}