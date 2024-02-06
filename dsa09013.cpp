// liệt kê cạnh cầu
#include <bits/stdc++.h>

using namespace std;
vector <int> ke[1005];
int used[1005];
// pair phải khai báo 2010 phần tử vì có thể có 1005 cạnh
pair <int, int> canh[2010];
void DFS(int u ) {
    used[u] = 1;
    for(auto v : ke[u]) {
        if(!used[v] ) {
            used[v] = 1;
            DFS(v);
        }
    }
}

int tinhsotplt(int n, int m) {
    int so = 0; 
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            DFS(i);
            so++;
        }
    }
    memset(used, 0, sizeof(used));
    return so;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for(int i = 1; i <= n; i++) ke[i].clear();
        memset(used, 0, sizeof(used));
        memset(canh, 0, sizeof(canh));
        for(int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
            // cạnh i có đỉnh đầu là x và đỉnh cuối y
            canh[i].first = x;
            canh[i].second = y;
        }
        int s = tinhsotplt(n, m);
        for (int i = 1; i <= m; i++) {
            // gọi ra cạnh i 
            int x = canh[i].first;
            int y = canh[i].second;
            // xoá đỉnh y trong ds đỉnh kề với x và đỉnh x trong ds đỉnh kề với y
            ke[x].erase(find(ke[x].begin(), ke[x].end(), y));
            ke[y].erase(find(ke[y].begin(), ke[y].end(), x));
            // tính sotplt khi đó xem có tăng không
            if(tinhsotplt(n,m) > s) cout << x << " " << y << " ";
            // push lại đỉnh y vào ds kề của x và đỉnh x vào ds kề của y 
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        cout << endl;     
    }

}