#include <bits/stdc++.h>
using namespace std;
// mảng parent dùng để lưu bố của phần tử, mảng sz dùng để lưu số lượng con của nó, kể cả nó
int parent[100005], sz[100005];
int n, m, ans;
// hàm Init dùng để khởi tạo, bố của i là chính nó, số con ban đầu của i là 1
void Init() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

// hàm Find dùng để tìm bố của 1 phần tử
int Find(int u) {
    if (u != parent[u]) parent[u] = Find(parent[u]);
    return parent[u];
}
// hàm Union dùng để gộp tập hợp chứa phần tử a và phần tử b thành 1 tập hợp
void Union(int a, int b) {
    // tìm bố của a, b là u, v
    int u = Find(a);
    int v = Find(b);
    // nếu có chung bố thì dừng luôn
    if(u == v) return;
    // nếu số con của u nhỏ hơn số con của v thì đổi chỗ u, v
    if (sz[u] < sz[v]) swap(u,v);
    // cho u là bố của v
    parent[v] = u;
    // số con của u được cộng thêm vào 1 lượng là số con của v
    sz[u]+=sz[v];
    // biến ans được cập nhật
    ans = max(ans, sz[u]);
}

int main() {
    int t; cin >> t;
    while(t--) {
        ans = 0;
        // nhập só đỉnh, cạnh
        cin >> n >> m;
        // khởi tạo bố của nó là chính nó
        Init();
        // gộp từng cặp
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            Union(x,y);
        }
        cout << ans << endl;
    }
    
}