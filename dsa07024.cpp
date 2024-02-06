#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)  cin >> a[i];
        ll l[n], r[n];
        stack <ll> st;
        st.push(-1);
        for (int i = 0; i < n; i++) {
            while(st.size() > 1 && a[st.top()] >= a[i]) st.pop();
            l[i] = st.top() + 1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        st.push(n);
        for (int i = n-1; i >= 0; i--) {
            while(st.size() > 1 && a[st.top()] >= a[i]) st.pop();
            r[i] = st.top() - 1;
            st.push(i);
        }
        ll maxn = 0;
        for (int i = 0; i < n; i++) {
            if (r[i] - l[i] + 1 >= a[i]) maxn = max(maxn, a[i]);
        }
        cout << maxn << endl;




        
    }
}