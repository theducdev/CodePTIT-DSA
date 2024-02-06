#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        // sắp xếp lại xâu
        sort(s.begin(), s.end());
        // in ra xâu đầu tiên
        cout << s << " ";
        // sử dụng hàm next_permutation
        while (next_permutation(s.begin(), s.end())) cout << s << " ";
        cout << endl;
    }
        
}