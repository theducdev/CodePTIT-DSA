#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s; 
        stack <char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.size() && st.top() == '(' && s[i] == ')') st.pop();
            else st.push(s[i]);
        }

        cout <<s.size() - st.size()<<  endl;
        

    }
}