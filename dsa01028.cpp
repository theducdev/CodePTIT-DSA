#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 1e3 + 1;
int n, a[maxN], k, ok;

// hàm sinh tổ hợp
void Sinhtohop(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;
    if(i == 0) ok = 0;
    else{
        ++a[i];
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    // tạo 1 set lưu mảng bài cho, để sort và loại bỏ phần tử trùng
    set <int> se;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    // tạo 1 vector đẻ lưu các phần tử của set để dễ truy cập 
    vector<int> v;
    for(auto x : se){
        v.push_back(x);
    }
    n = se.size();
    ok = 1;
    // khởi tạo mảng a để sinh tổ hợp
    for(int i = 1; i <= k; i++) a[i] = i;
    while(ok){
        // in ra phần tử tại vị trí a[i] - 1 của vector v
        for(int i = 1; i <= k; i++) cout << v[a[i]-1] << " ";
        cout << endl;
        Sinhtohop();
    }
 
    return 0;
}
