#include <bits/stdc++.h>
using namespace std;

int n, a[100], xuoi[100], nguoc[100], x[100];

int ans;
// đánh dấu tất cả là 0, ô nào là 0 thì có thể đặt quân hậu vào
void khoitao() {
    for (int i =1; i <= 20; i++) a[i] = xuoi[i] = nguoc[i] = 0;
}
// duyệt hàng thứ i
void Try(int i) {
    // duyệt tất cả các ô của hàng i
    for(int j =1; j <= n; j++) {
        // nếu ô đó chưa được đặt hậu, hàng chéo xuôi và hàng chéo ngược cũng chưa
        if (a[j]==0 && xuoi[i-j+n]==0 && nguoc[i+j-1]==0) {
            // thì đặt hậu vào vị trí đó
            // cập nhật ô đó, chéo xuôi và chéo ngược là đã được đặt hậu
            x[i] = j; a[j] = 1;
            xuoi[i-j+n] = 1;
            nguoc[i+j-1] = 1;
            // kiểm tra xem đã duyệt đến hết hàng cuối cùng chưa, nếu rồi thì tức là đã đặt đủ, ans++
            if(i==n) ans++;
            // nếu chưa thì tiếp tục quay đến dòng tiếp 
            else Try(i+1);
            // khởi tạo lại vị trí đó là chưa đặt, để dành cho các nhánh tiếp
            a[j] = 0;
            xuoi[i-j+n] = 0;
            nguoc[i+j-1] = 0;
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        ans = 0;
        khoitao();
        cin >> n;
        Try(1);
        cout << ans<< endl;
    }
}