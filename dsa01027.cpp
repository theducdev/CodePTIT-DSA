#include <bits/stdc++.h>

using namespace std;

int ok = 0, n;
int a[1000];
// hàm sinh hoán vị
void PermutationGen() {
    int i = n - 1;
    while(i > 0 && a[i] > a[i+1] ) i--;
    if (i == 0) ok = 1;
    else {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n +1);
    }
}


int main() {   
    cin >> n;
    for (int i = 1; i <= n; i++) a[i] = i;
    // tạo 1 set để lưu các giá trị bài cho để sort
    set <int> mang;
    vector <int> v;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        mang.insert(x);
    }
    // thêm các phần tử của set vào vector v, để dễ truy cập
    for (int z : mang) v.push_back(z);
    n = v.size();
    while(ok == 0) {
        // in ra phần thứ có vị trị a[i] trong vector v
        for (int i = 1; i <= n; i++) cout << v[a[i] - 1] << " ";
        PermutationGen();
        cout << endl;   
    }
    ok = 1;   
}