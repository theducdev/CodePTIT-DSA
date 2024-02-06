#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == ')' && st.top() == '(') st.pop();
            else st.push(s[i]);
            
        }
        int d1 = 0, d2 = 0;
        while(!st.empty()) {
            char x = st.top();
            if (x == '(') d1++;
            else d2++;
            st.pop();
            
        }
        
        cout << d1/2+d2/2+d1%2+d2%2<<endl;
    }
}