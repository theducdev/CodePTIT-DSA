#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
int used[1005];
int n, m;
// hàm này dùng để tạo cây khung
void Tree_DFS(int u) {
    stack <int> st;
    // biến sc dùng để kiểm tra số cạnh của cây
    int sc = 0;
    // vector T dùng để lưu các cạnh
    vector <pair<int,int>> T;
    st.push(u);
    used[u] = 1;
    while(!st.empty()) {
        int x = st.top(); st.pop();
        for (auto v : ke[x]) {
            if (used[v] == 0) {
                used[v] = 1;
                st.push(x);
                st.push(v);
                T.push_back({x,v});
                sc++;
                break;
            }
        }
    }
    // nếu số cạch nhỏ hơn n-1 thì k liên thông
    if (sc < n-1) cout << -1;
    // ngược lại thì in ra các cạnh của đồ thị
    else for (auto x : T) {
        cout << x.first << " " << x.second << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--){
        int u; cin >> n >> m >> u;
        memset(used, 0, sizeof(used));
        for(int i = 1; i <= n; i++) ke[i].clear();
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        Tree_DFS(u);
        cout << endl;

    }
}