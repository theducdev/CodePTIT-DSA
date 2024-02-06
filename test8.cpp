#include <bits/stdc++.h>
using namespace std;

// dinh de nhap toa do
struct Dinh {
    double x;
    double y;
};

// ham tinh khoang cach giua 2 dinh
double kc(Dinh a, Dinh b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

// de qui DFS de tim thanh phan lien thong cua mot dinh
void DFS(int u, vector<bool>& visited, vector<vector<int>>& Ke, vector<Dinh>& vertices, double d, vector<int>& thanhph) {
    visited[u] = true;
    thanhph.push_back(u);
    for (int v : Ke[u]) {
        if (!visited[v] ) {
            DFS(v, visited, Ke, vertices, d, thanhph);
        }
    }
}

// ham tim tat ca thanh phan lien thong cua do thi ma khong canh nao co chieu dai hon d
vector<vector<int>> timtatcatplt(vector<Dinh>& vertices, double d) {
    int n = vertices.size();
    vector<vector<int>> Ke(n);
    for (int u = 0; u < n; u++) {
        for (int v = u + 1; v < n; v++) {
            if (kc(vertices[u], vertices[v]) <= d) {
                Ke[u].push_back(v);
                Ke[v].push_back(u);
            }
        }
    }
    vector<vector<int>> components;
    vector<bool> visited(n, false);
    for (int u = 0; u < n; u++) {
        if (!visited[u]) {
            vector<int> thanhph;
            DFS(u, visited, Ke, vertices, d, thanhph);
            components.push_back(thanhph);
        }
    }
    return components;
}


int main() {
    cout<<"nhap vao so dinh"<<endl;
    int n;cin>>n;
    vector<Dinh> vertices(n);
    cout<<"nhap vao toa do cac dinh theo x,y ,moi dinh mot dong"<<endl;
    for(auto &g:vertices){
        cin>>g.x>>g.y;
    }
    double d ;
    cout<<"nhap vao khoang cach d"<<endl;
    cin>>d;
    cout<<"cac thanh phan lien thong:"<<endl;
    vector<vector<int>> components = timtatcatplt(vertices, d);
    for (int i = 0; i < components.size(); i++) {
        cout << "Thanh phan " << i << ": ";
        for (int u : components[i]) {
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}