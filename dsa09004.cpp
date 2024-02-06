#include <bits/stdc++.h>

using namespace std;
// tạo ra mảng used để đánh dấu những vị trí đã thăm rồi
bool used[1005];
// vector List để chuyển từ ds cạnh sang ds kề
vector <int> List[1005];

void DFS(int u) {
    // thăm u thì đánh dấu u là đã thăm
    used[u] = 1; cout << u << " ";
    // duyệt tất cả các đỉnh kề với u
    for(int v : List[u]) {
        // nếu đỉnh v kề với u chưa được thăm thì tiếp tục thăm v
        if (!used[v]) DFS(v); 
    }
}


int main() {   
    int t; cin >> t;
    while(t--) {
        memset(used, 0, sizeof(used));
        for (int i = 0; i < 1005;i++) List[i].clear();
        int n, m, s; cin >> n >> m >> s;
        // chuyển từ ds cạnh sang ds kề
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        DFS(s); cout << endl;
    }    
}