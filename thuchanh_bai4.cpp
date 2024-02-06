#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int sl = 0, dd[260] = {};
        for (int i = 0; i < s.length(); i++) {
            dd[s[i]]++;
            if(dd[s[i]] == 1) {
                sl++;
            }
        }
        memset(dd, 0, sizeof(dd));
        int cnt = 0, index = 0, res = s.length();
        for(int i = 0; i < s.length(); i++) {
            dd[s[i]]++;
            if(dd[s[i]] == 1) cnt ++;
            if (cnt == sl ) {
                while(dd[s[index]] > 1) {
                    dd[s[index]]--; index++;

                }
                res = min (res, i - index +1);
            }
        }
        cout << res << endl;
    }  

}