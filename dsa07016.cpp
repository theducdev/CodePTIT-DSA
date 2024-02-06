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
        string s; cin >> s;
        stack <int> st;
        int i = 1;
        for (int i = 0; i <= s.size(); i++) {
            if(s[i] == 'D') st.push(i+1);
            else {
                cout << i+1;
                while(!st.empty()) {
                    cout << st.top();
                    st.pop(); 
                }
            }
        }
        cout << endl;
        


    }
}