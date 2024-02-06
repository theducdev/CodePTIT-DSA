#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        stack <string> ans;
        string tmp;
        for (int i = 0; i< s.size(); i++) {
            if(s[i] != ' ') tmp+=s[i];
            if (s[i] == ' ' || i + 1 == s.size()) {
                ans.push(tmp);
                tmp = "";
            }
        }
        while(!ans.empty()) {
            string res = ans.top();
            cout << res << " ";
            ans.pop();
        }
        cout << endl;
    }
        
}