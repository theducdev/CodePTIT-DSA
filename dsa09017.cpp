#include <bits/stdc++.h>
using namespace std;
// biến ok = 1 để kiểm tra xem có phải là chu trình không
int n, m, ok = 1;
vector <int> ke[1005];
int used[1005], truoc[1005];
// DFS có tham số u là đỉnh hiện tại xét DFS, tham số start là đỉnh bắt đầu chu trình, dùng để kiểm tra xem có điểm cuối nào bằng với start không 
void DFS(int u, int start) {
    // nếu ok = 0 thì dừng luôn
    if(ok == 0) return;
    // thăm đỉnh nào thì đỉnh đó bằng 0;
    used[u] = 1;
    // duyệt tất cả các đỉnh kề với nó
    for (auto x : ke[u]) {
        // nếu nó chưa được thăm thì thăm
        if (!used[x]) {
            // gán bố của nó à u, đánh dấu đã thăm
            truoc[x] = u;
            used[x] = 1;
            DFS(x, start);
        }
        // nếu đỉnh đó đã được xét thì kiểm tra xem nó có phải là start không, và bố của nó có phải start không, thoả mãn thì là chu trình
        else if(truoc[u] != start && x == start) {
            // có chu trình thì không phải cây, gán ok = 0
            ok = 0; 
        }
    }
}

// hàm kiểm tra xem đồ thị có phải cây không
bool checkcay() {
    // duyệt tất cả các đỉnh
    for (int i = 1; i <= n; i++) {
        // DFS từng đỉnh
        DFS(i,i);
        // ok = 0 thì sai luôn
        if (ok == 0) return false;
        // duyệt tất cả các đỉnh xem đã được thăm hết chưa, nếu có đỉnh nào chưa thăm thì là không liên thông, sai luôn 
        for (int j = 1; j <= n; j++) {
            if (!used[j]) return false;
        }
    }
    return true;

}

int main() {
    int t; cin >> t; 
    while(t--) {
        cin >> n;
        m=n-1;
        memset(used, 0, sizeof(used));
        memset(truoc, 0, sizeof(truoc));
        for (int i = 1; i <= n; i++) ke[i].clear();
        for(int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        if(checkcay()) cout << "YES";
        else cout << "NO";
        cout << endl;
        ok = 1;
    }
}