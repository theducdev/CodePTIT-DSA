// chu trình euler trong đô thị có hướng
#include <bits/stdc++.h>

using namespace std;
// vector ra và vao dùng để lưu các đỉnh vào và các đỉnh ra của đỉnh đó
vector <int> ra[1005];
vector <int> vao[1005];
int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            ra[i].clear();
            vao[i].clear();
        }
        // khởi tạo biến dem0 dùng để tính số lượng đỉnh có bán bậc ra bằng bán bậc vào
        // dem1 để tính số lượng đỉnh có ra-vào=1
        // demam1 để tính số lượng đỉnh có ra-vào=-1
        int dem0 = 0, dem1 = 0, demam1= 0;
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            // thêm y vào danh sách những đỉnh ra của x
            ra[x].push_back(y);
            // thêm x vào danh sách những đỉnh vào của y
            vao[y].push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            int x = ra[i].size() - vao[i].size();
            // nếu ra-vào = 0 thì dem0++
            if (x == 0) dem0++;
            else if(x==1) dem1++;
            else if(x==-1) demam1++;
        }
        // nếu tất cả các đỉnh đều có bán bậc ra bằng bán bậc vào thì là đồ thị có hướng euler
        if(dem0==n) cout << 1;
        else cout << 0;
        cout << endl;
        
        
    }

}