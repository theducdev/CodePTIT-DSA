// đường đi và chu trình euler với đồ thị vô hướng
#include <bits/stdc++.h>

using namespace std;
vector <int> ke[1005];
int main() {
    int t; cin >> t;
    while(t--) {
        // khởi tạo biến dem1, dem2 để đếm só đỉnh có bậc lẻ, chẵn
        int dem1 = 0, dem2 = 0;
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) ke[i].clear();
        for (int i = 1; i <= m; i++) {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        // duyệt tất cả các đỉnh, đỉnh nào bậc chẵn thì dem2++, lẻ thì dem1++
        for(int i = 1; i <= n; i++) {
            int x = ke[i].size();
            if(x%2==0) dem2++;
            else dem1++;
        }
        // nếu tất cả các đỉnh đều bậc chẵn thì là euler
        if(dem2 == n) cout << 2;
        // nếu có 2 đỉnh bậc lẻ thì là nửa euler
        else if(dem1 == 2) cout << 1;
        // còn lại thì k là gì
        else cout << 0;
        cout << endl;
        
    }

}