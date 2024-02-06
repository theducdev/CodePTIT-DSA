#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    return (s="")
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack <int> st;
        for (int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                int n = s[i] - '0';
                st.push(n);
            }
            else {
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int x = tinhgiatri(b,a,s[i]);
                st.push(x);
            }
            
        }
        cout << st.top() << endl;
    }
}