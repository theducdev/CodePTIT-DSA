#include <bits/stdc++.h>

using namespace std;


int main() {
    int t; cin >> t;
    for(int stt = 1; stt <= t; stt++) {
        int x; cin >> x;
        string s; cin >> s;
        cout << x << " ";
        // kiểm tra xem còn next được không?
        if(next_permutation(s.begin(), s.end())) cout << s;
        else cout << "BIGGEST";
        cout << endl;
        
    }


}