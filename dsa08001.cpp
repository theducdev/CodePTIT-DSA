#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        queue <int> q;
        while(n--) {
            int x; cin >> x;
            if (x == 1) cout << q.size() << endl;
            if (x == 2) {
                if(q.empty()) cout << "YES";
                else cout << "NO";
                cout << endl;
            }
            if (x == 3) {
                int a; cin >> a;
                q.push(a);
            }
            if (x == 4) {
                if (!q.empty()) q.pop();
            }
            if (x == 5) {
                if (!q.empty()) cout << q.front();
                else cout << -1;
                cout << endl;
            }
            if (x == 6) {
                if (!q.empty()) cout << q.back();
                else cout << -1;
                cout << endl;
            }
        }
        cout << endl;
        
    }
}