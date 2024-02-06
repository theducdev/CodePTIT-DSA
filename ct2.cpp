#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s; 
        stack <string> st;
        string ans = "";
        vector <int> idx;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') st.push(string(1,s[i]));
            else if (isalpha(s[i])) {
                ans+= s[i];
            }
            else if (s[i] == ')') {
                if (st.size() && st.top() == "(") {
                    st.pop();
                    ans = "0" + ans + "1";
                }
                else st.push(string(1,s[i]));
            }
        }
        cout << ans;
        // vector <string> v;
        // while(!st.empty()) {
        //     v.push_back(st.top());
        //     st.pop();
        // }
        // for (int i = v.size()-1; i >= 0; i--) {
        // 	if (v[i] == "(" || v[i] == ")") cout << -1;
        // 	else cout << v[i];
		// } 
        cout << endl;
    }
}