#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        // tạo ra vector xau dùng để lưu kq
        vector <int> xau;
        xau.push_back(s[0]);
        // để chuyển từ mã gray sang mã nhị phân thì chữ số đầu tiên giữ nguyên, các chứ só sau = chữ số ở vị trí đó của mã gray xor với chữ số ở vị trítrước đó của mã np
        for(int i = 1; i < n; i++) {
            int x = (s[i]-48)^xau[i-1];
            xau.push_back(x);
        }
        for(char j : xau) cout << j;
        cout << endl;      
    }
}