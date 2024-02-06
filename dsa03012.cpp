#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int d; string s;
        d=2;
        cin >> s;
        int n = s.size();
        int a['z'+1] = {0};
        for(int i = 0; i < n; i++) a[s[i]]++;
        int m = *max_element(a, a + 'z');
        if(n >= m + (d-1)*(m-1)) cout << "1" << endl;
        else cout << "-1" << endl;          
    }
}