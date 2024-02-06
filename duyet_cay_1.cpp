#include <bits/stdc++.h>
using namespace std;
// vector in, pre để lưu duyệt giữa và duyệt trước bài cho
vector <int> in;
vector <int> pre;
// hàm postOrder để in ra theo thứ tự duyệt sau
void postOrder(int in_start, int in_end, int pre_start, int pre_end) {
    // điều kiện dừng là khi đã chạy hết các node
    if (in_start > in_end) return;
    // lấy ra giá trị gốc là phần tử đầu tiên của duyệt trước
    int root = pre[pre_start];
    // biến in_root là chỉ số của giá trị node gốc
    int in_root = in_start;
    // lặp cho đến khi biến in_root chỉ đúng vào node gốc đang xét
    while(in[in_root] != root) in_root++;
    // tim số lượng các node bên trái
    int left_size = in_root - in_start;
    // chia vector duyệt giữa và duyệt trước ra làm 2 nửa, 1 nửa là cây con trái, 1 nửa là cây con phải
    // cây con trái 
    // duyệt giữa sẽ tính từ đầu, đến vị trí liền trước của gốc
    // duyệt trước sẽ tính từ vị trí liền sau phần tử đầu tiên(do phần tử đầu tiên được lấy làm gốc), đến left_size vị trí tiếp theo
    postOrder(in_start, in_root-1, pre_start+1, pre_start + left_size );
    // cây con phải
    // duyệt giữa sẽ lấy từ vị trí liền sau của gốc, đến hết dãy
    // duyệt trước sẽ lấy từ vị trí liền sau của left_size, đến hết
    postOrder(in_root+1, in_end, pre_start+left_size+1, pre_end);
    cout << root << " ";

}

int main() {
    int t; cin >> t;
    while(t--) {
        pre.clear(); in.clear();
        int n; cin >> n;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            in.push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            pre.push_back(x);
        }
        postOrder(0, n-1, 0, n-1);
        cout << endl;
    }
}