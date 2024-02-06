#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int k;
        string s;
        cin >> k >> s;      
        for (int i = 0; i < s.size() - 1; i++) {
            char max = s[s.size() - 1];
            int vt = 99;
            for(int j = s.size() - 1; j > i && k > 0; j--) {
                if(s[j] > max ) {
                    max = s[j];
                    vt = j;
                }
            }
            if (max > s[i] && k > 0) {
                k--;
                swap(s[i], s[vt]);
            }
        }
        
        cout << s << endl;

    }
   
}