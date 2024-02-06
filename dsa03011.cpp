#include <bits/stdc++.h>

using namespace std;

#define m 1000000007;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        priority_queue <int, vector<int>, greater <int> > q;
        for (int i = 0; i < n; i++) {
            long long x; cin >> x;
            q.push(x);
        }
        long long kq = 0;
        while(q.size() >= 2) {
            long long sum = 0;
            long long min1 = q.top(); q.pop();
            long long min2 = q.top(); q.pop();
            sum = (min1 + min2) ;
            sum%=m;
            kq = (kq + sum ) %m;
            q.push(sum);
        }
        cout << kq << endl;
    }
}