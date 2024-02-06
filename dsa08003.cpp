#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    deque <int> q;
    while (t--)
    {
        string x; cin >> x;
        if (x == "PUSHFRONT") {
            int a; cin >> a;
            q.push_front(a);
        }
        if (x == "PUSHBACK") {
            int a; cin >> a;
            q.push_back(a);
        }
        if (x == "POPFRONT") {
            if (!q.empty()) q.pop_front();
        }
        if (x == "POPBACK") {
            if (!q.empty()) q.pop_back();
        }
        if (x == "PRINTFRONT") {
            if (!q.empty()) cout << q.front();
                else cout << "NONE";
                cout << endl;
        }
        if (x == "PRINTBACK") {
            if (!q.empty()) cout << q.back();
                else cout << "NONE";
                cout << endl;
        }

        cout << endl;
        
    }
}