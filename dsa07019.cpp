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
        long long h[n], l[n], r[n];
        for(int i = 0; i < n; i++) cin >> h[i];
        stack <int> st;
        st.push(-1);
        for(int i = 0; i <n; i++) {
            while(st.size() > 1 && h[st.top()] >= h[i]) st.pop();
            l[i] = st.top() +1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        st.push(n);
        for(int i = n-1; i >= 0; i--) {
            while(st.size() > 1 && h[st.top()] >= h[i]) st.pop();
            r[i] = st.top() - 1;
            st.push(i);
        }
        long long maxn = -1e9;
        for(int i = 0; i < n; i++) {
            maxn = max(maxn, (r[i] - l[i] + 1)*h[i]);
        }
        cout << maxn << endl;

    }
}