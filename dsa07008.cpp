#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int uutien(char c) {
    if ( c == '+' || c == '-') return 1;
    if ( c == '*' || c == '/') return 2;
    if ( c == '^' ) return 3;
    return 0;
}


int main() {
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s; 
        string ans = "";
        stack <char> st;
        for (int i = 0; i < s.size(); i++) {
            if(isalpha(s[i])) ans+=s[i];
            else if(s[i] == '(') st.push(s[i]);
            else if (s[i] == ')') {
                while(!st.empty() && st.top() != '(') {
                    char c = st.top();
                    ans += c; 
                    st.pop();
                }
                if (st.top() == '(') st.pop(); 
            }
            else {
                while(!st.empty() && uutien(s[i]) <= uutien(st.top())) {
                    char c = st.top();
                    ans += c; 
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        cout << ans << endl;

    }
}