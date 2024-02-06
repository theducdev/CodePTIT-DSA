#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int ok = 1;
        string s;
        cin >> s;
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                if (st.size() && st.top() == '(')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (st.size() && st.top() == '[')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
            else
            {
                if (st.size() && st.top() == '{')
                    st.pop();
                else
                {
                    ok = 0;
                    break;
                }
            }
        }
        if (ok == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
