#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == ']' || isalpha(s[i]))
                st.push(string(1, s[i]));
            else if (s[i] == '[')
            {
                string tmp = "";
                while (st.size() && st.top() != "]")
                {
                    string a = st.top();
                    st.pop();
                    tmp += a;
                }
                if (st.top() == "]")
                    st.pop();
                st.push(tmp);
            }
            else if (isdigit(s[i]))
            {
                string sum = "";
                while (isdigit(s[i]) && i >= 0) {
                    sum = s[i] + sum;
                    i--;
                }
                i++;

                string b = st.top();
                for (int j = 1; j <= stoi(sum) - 1; j++)
                    st.push(b);
            }
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}
