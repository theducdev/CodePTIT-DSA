#include <bits/stdc++.h>
using namespace std;
// hàm moves dùng để lưu đường đi của quân mã
vector <pair<int,int>> moves = {{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1}};
// hàm covert dùng để chuyển đổi string sang dạng ma trận ví dụ e2 thành 5,2
pair <int,int> convert(string s) {
    s[0] = s[0] - 'a' + 1;
    s[1] = s[1] - '0';
    return {s[0], s[1]};
}

// hàm BFS dùng đi di chuyển quân mã
int BFS(string s1, string s2) {
    // mảng f dùng để lưu số bước để đi đến đích
    int f[11][11];
    memset(f, -1, sizeof(f));
    // chuyển 2 xâu đầu bài thành 2 vị trí trong ma trận
    pair <int, int> st = convert(s1);
    pair <int, int> en = convert(s2);
    queue <pair<int,int>> Q;
    // push vào vị trí bắt đầu
    Q.push(st);
    // khởi tạo số bước để đi đến vị trí bắt đầu là 0
    f[st.first][st.second] = 0;
    // duyệt cho đến khi không còn phần tử trong Q
    while(!Q.empty()) {
        // lấy ra phần tử đầu tiên trong Q
        pair <int,int> x = Q.front(); Q.pop();
        // duyệt tất cả các hướng đi
        for (pair <int,int> k : moves) {
            // nếu hướng đi đó chưa từng được đi, và thoả mãn bàn cờ, thì duyệt
            if(x.first+k.first>0 && x.first+k.first<=8 && x.second+k.second>0 && x.second+k.second<=8 &&  f[x.first+k.first][x.second+k.second] == -1) {
                // số bước đến ô đó = số bước đến ô trước đó + 1
                f[x.first+k.first][x.second+k.second] = f[x.first][x.second] + 1;
                // push lại vào trong Q
                Q.push({x.first+k.first,x.second+k.second});
            }
        }
        // nếu đã đi được đến đích thì dừng luôn
        if(f[en.first][en.second]!=-1) break;
    }
    return f[en.first][en.second];
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s1, s2; cin >> s1 >> s2;
        cout << BFS(s1,s2) << endl;
       
    }
}