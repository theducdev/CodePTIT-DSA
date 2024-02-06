#include <bits/stdc++.h>
using namespace std;

// quay hình vuông bên trái
vector <int> left(vector<int> a) {
    vector <int> b = {1,2,3,4,5,6};
    int a0 = a[0];
    int a1 = a[1];
    int a3 = a[3];
    int a4 = a[4];
    b[0] = a3;
    b[1] = a0;
    b[3] = a4;
    b[4] = a1;
    b[2] = a[2];
    b[5] = a[5];
    return b;
}
// quay hình vuông bên phải
vector <int> right(vector<int> a) {
    vector <int> b = {1,2,3,4,5,6};
    int a2 = a[2];
    int a1 = a[1];
    int a5 = a[5];
    int a4 = a[4];
    b[5] = a2;
    b[1] = a4;
    b[2] = a1;
    b[4] = a5;
    b[3] = a[3];
    b[0] = a[0];
    return b;
}
// hàm check kiểm tra xem đã trở thành cấu hình cuối cùng chưa
bool check(vector <int> in, vector <int> out) {
    for (int i = 0; i < 6; i++) {
        if (in[i]!=out[i]) return false;
    }
    return true;
}
// hàm quay dùng để quay hình vuông cho đến khi dc cấu hình cuối cùng thì dừng
int quay(vector <int> in, vector <int> out) {
    // queue chứa pair dạng vector để lưu cấu hình, và int để lưu số lần quay để được cấu hình đó
    queue <pair<vector<int>, int>> Q;
    // push cấu hình đầu tiên và số lần quay là 0
    Q.push({in, 0});
    while(!Q.empty()) {
        // gọi cấu hình đầu tien x1
        pair<vector<int>, int> x1 = Q.front(); 
        // kiểm tra xem x1 có là cấu hình cuối cùng k, nếu có break luôn
        if(check(x1.first, out)) break; 
        // không thì pop ra
        Q.pop();
        // push vector z là xoay phải của cấu hình hiện tại, đồng thêm +1 vào số lần quay
        vector <int> z = right(x1.first);
        Q.push({z, x1.second+1});
        // tương tự, push vector y là xoay trái của cấu hình hiện tại, đồng thời +1 vào số lần quay
        vector <int> y = left(x1.first);
        Q.push({y, x1.second+1});
    }
    // sau khi break, thì gọi ra phần tử đầu tiên của Q, trả về x.second là số lần để quay đến cấu hình cuối cùng
    pair<vector<int>, int> x = Q.front();
    return x.second;
}

int main() {
    int t; cin >> t;
    while(t--) {
        // nhập đề bài dưới dạng 2 vector in và out
        vector <int> in, out;
        for(int i = 1; i <= 6; i++) {
            int x; cin >> x;
            in.push_back(x);
        }
        for(int i = 1; i <= 6; i++) {
            int x; cin >> x;
            out.push_back(x);
        }
        cout << quay(in, out) << endl;

    }

}