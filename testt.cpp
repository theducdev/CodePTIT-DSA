#include <bits/stdc++.h>
using namespace std;
int n, m, ok;
int parent[1005], sz[1005];
// khởi tạo bố của i là chính nó, kích cỡ của i bằng 1
void Init() {
    for(int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

// hàm Find tìm bố của u
int Find(int u ) {
    // nếu bố của u khác chính nó thì tìm bố của u = đệ quy
    if (u != parent[u]) parent[u]=Find(parent[u]);
    return parent[u];
}
// hàm gộp u với v
void Union(int u, int v) {
    // gọi a là bố của u, b là bố của v
    int a = Find(u);
    int b = Find(v);
    // nếu u và v cùng bố thì có chu trình
    if (a==b && (u == 1 || v == 1)) {
        ok = 1; return;
    }
    // nếu a có ít con hơn b thì đổi chỗ a,b
    if(sz[a] < sz[b]) swap(a, b);
    // gán a là bố của b
    parent[b] = a;
    sz[a]+=sz[b];
}

int main() {
    int t; cin >> t;
    while(t--) {
        ok = 0;
        cin >> n >> m;
        Init();
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            Union(x,y);
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
        
    }
}