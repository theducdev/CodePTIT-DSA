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
        cin >> s;
        stack<int> st;
        int dem = 0;
        st.push(-1);
        for (int i = 0; i < s.size(); i++)
        {   
            if (s[i] == '(') st.push(i);
            else {
                st.pop();
                if(st.size()>0)
                dem = max(dem, i-st.top());
                if(st.size()==0) st.push(i);
            }

        }
        cout <<dem <<endl;
    }
}