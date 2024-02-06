#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    queue <int> q;
    while (t--)
    {
        string x; cin >> x;
        if (x == "PUSH") {
            int a; cin >> a;
            q.push(a);
        }
        if (x == "POP") {
            if (!q.empty()) q.pop();
        }
        if (x == "PRINTFRONT") {
            if (!q.empty()) cout << q.front();
                else cout << "NONE";
                cout << endl;
        }

        cout << endl;
        
    }
}