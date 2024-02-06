#include <bits/stdc++.h>
using namespace std;

int n, m;
// mảng D dùng để lưu khoảng cách ngắn nhất từ start đến từng đỉnh
int D[1005];
// hàng đợi ưu tiên Q dùng để đưa ra phần tử có khoảng cách nhỏ nhất
priority_queue <pair <int,int>, vector <pair<int, int>>, greater <pair<int, int>> > Q;
// mảng List dùng để lưu ma trận kề, kèm trọng số
vector <pair <int,int>> List[1005]; 

void Dijkstra(int start) {
    // khởi tạo mảng D có tất cả các phần tử là 1e9
    for (int i = 1; i <= n; i++) D[i] = 1e9;
    // khoảng cách đến chính nó = 0
    D[start] = 0;
    // pop hết các phần tử ra khỏi Q trước khi sử dụng
    while(!Q.empty()) Q.pop();
    // push vào phần tử pair gồm {khoảng cách đỉnh x đến start, đỉnh x}
    Q.push({0, start});
    while(!Q.empty()) {
        // lấy ra phần tử đầu tiên
        pair <int,int> x = Q.top(); Q.pop();
        // lấy ra đỉnh u
        int u = x.second;
        // duyệt tất cả các cạnh kề với u
        for (int i = 0; i < List[u].size(); i++){
            // gọi v là đỉnh kề với u
            int v = List[u][i].second;
            // d_uv là trọng số của cạnh uv
            int d_uv = List[u][i].first;
            // nếu đi qua u rồi đến v ngắn hơn đi thẳng đến v
            if(D[u] + d_uv < D[v]) {
                // thì cập nhật khoảng cách đến v
                D[v] = D[u] + d_uv;
                // push đỉnh v vào Q
                Q.push({D[v], v});
            }
        }
    }

}

int main() {
    int t; cin >> t;
    while(t--) {
        int st;
        cin >> n >> m >> st;
        for (int i = 1; i <= n; i++) List[i].clear();
        for (int i = 1; i <= m; i++) {
            int x,y,z; cin >> x >> y >> z;
            // trọng số cho đứng trước đỉnh, để dễ sắp xếp
            List[x].push_back({z,y});
            List[y].push_back({z,x});
        }
        // duyệt dijkstra đỉnh bắt đầu
        Dijkstra(st);
        for (int i = 1; i<= n; i++) cout << D[i]<< " ";
        cout << endl;
    }


}