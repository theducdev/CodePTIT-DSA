#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s; 
        stack <string> st;
        for (int i = 0; i <= s.size(); i++) {
            if(isalpha(s[i])) st.push(string(1, s[i]));
            else if (s[i] == '+' || s[i] == '-' ||s[i] == '*' ||s[i] == '/') {
                string tmp = "";
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                tmp = s[i] + b + a;
                st.push(tmp);
            }
            
        }
        while(!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
        

    }
}