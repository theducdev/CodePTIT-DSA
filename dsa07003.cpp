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
        int ok = 0;
        string s;
        getline(cin, s);
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                st.push(s[i]);
            if (s[i] == ')')
            {
                if (st.top() == '(')
                {
                    ok = 1;
                    break;
                }
                while (st.size() && st.top() != '(')
                    st.pop();
                st.pop();
            }
        }

        if (ok == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}
