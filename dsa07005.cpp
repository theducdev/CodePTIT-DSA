#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack <char> st;
        for(int i = s.size() -1; i >= 0; i--) {
            if (isalpha(s[i])  ) st.push(s[i]);
            else if (s[i] == '+' ) {
                if (st.top() == '(') 
            }
        }

        
        cout << endl;
    }
}