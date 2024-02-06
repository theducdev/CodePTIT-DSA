#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;
    priority_queue <ll, vector <ll>, greater <ll> >Q;
    for (int i = 1; i <= n; i++) {
        ll x; cin >> x;
        Q.push(x);
    }
    ll chiphi = 0;
    while(Q.size()!= 1) {
        if(Q.size() >= k) {
            ll sumtmp = 0;
            ll nhonhat = Q.top(); Q.pop();
            sumtmp+=nhonhat;
            for (int i = 1; i <= k-2; i++) {
                ll x = Q.top();
                sumtmp+=x;
                Q.pop();
            }
            ll lonnhat = Q.top(); Q.pop();
            sumtmp+=lonnhat;
            Q.push(sumtmp);
            chiphi+=lonnhat-nhonhat;
        }
        else {
            ll sumtmp = 0;
            ll x = Q.size();
            ll nhonhat = Q.top(); Q.pop();
            for (int i = 1; i <= x-2; i++) {
                ll p = Q.top();
                sumtmp+=p;
                Q.pop();
            }
            ll lonnhat = Q.top(); Q.pop();
            sumtmp+=nhonhat;
            sumtmp+=lonnhat;
            Q.push(sumtmp);
            chiphi+=lonnhat-nhonhat;
        }
    }
    cout << Q.top() << endl << chiphi;
}