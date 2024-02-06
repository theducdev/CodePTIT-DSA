#include <bits/stdc++.h>

using namespace std;

// cách chuyển từ mã nhị phân sang mã gray:
// số đầu tiên giữ nguyên
// số thứ i trở đi của mã gray sẽ bằng số thứ i của mã np xor với số thứ i-1 của mã np

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        vector <int> xau;
        xau.push_back(s[0]-48);
        for(int i = 1; i < n; i++) {
            int x = (s[i]-48)^(s[i-1]-48);
            xau.push_back(x);
        }
        for(int j : xau) cout << j;
        cout << endl;      
    }
}