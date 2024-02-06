#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        // mảng a dùng để nhập cấu hình bài cho 
        int a[n+1];
        // lưu a[0] = 0 để kiểm tra xem nó có là cấu hình đầu tiên hay không 
        // vd 01234 thì sẽ là cấu hình đầu tiên
        a[0] = 0;
        for (int i = 1; i <= k; i++) cin >> a[i];
        int pos = 0;
        for (int i = k; i >= 1; i--) {
            // tìm phần tử đầu tiên khác phần tử trước đó cộng thêm 1, tìm được thì break luôn
            if(a[i] != a[i-1] + 1) {pos = i;break;}
        }
        // nếu pos vẫn bằng 0, tức là dạng 01234, đây là cấu hình đầu tiên, nên ta sẽ gán mảng a là cấu hình cuối cùng
        if (pos == 0) {
            for (int i = 1; i <= k;i++) {
                a[i] = n+i-k;
            }

        }
        // nếu pos khác 0, ta sẽ trừ a[pos] đi 1 đơn vị
        else {
            a[pos]--;
            // nếu phần tử cuối cùng khác n thì các phần tử kể từ pos sẽ tắng thêm 1 đơn vị
            if (a[k] != n) {
                for(int i = pos + 1; i <= k; i++) a[i]++;
            }
        }
        for (int i = 1; i <= k; i++) cout << a[i] << " ";
        cout << endl;
        
    }

}