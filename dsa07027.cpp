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
        int n; cin >> n;
        int a[n], res[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        stack <int> st;
        for (int i = n-1; i >=0; i--) {
            while(st.size() && st.top() <= a[i]) st.pop(); 
            if (!st.empty()) res[i] = st.top();
            else res[i] = -1;  
            st.push(a[i]);
        }
        for (auto i : res) cout << i << " ";
        cout << endl;
    }
}