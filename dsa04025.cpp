#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1e9 +7;

struct MaTran {
    ll a, b, c, d;
};

MaTran operator * (MaTran x, MaTran y) {
    MaTran z;
    z.a = (x.a*y.a%m + x.b*y.c%m)%m;
    z.b = (x.a*y.b%m + x.b*y.d%m)%m;
    z.c = (y.a*x.c%m + y.c*x.d%m)%m;
    z.d = (y.b*x.c%m + x.d*y.d%m)%m;
    return z;
}

ostream &operator << (ostream &os, MaTran mt) {
    os << mt.c;
    return os;
}

MaTran powMod(MaTran q, ll n) {
    MaTran z;
    z.a = 1;
    z.b = 1;
    z.c = 1;
    z.d = 0;
    if(n == 1) return z;
    MaTran w = powMod(q, n/2);
    if (n %2 == 0) return w*w;
    return q*w*w; 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        if (n == 0 ) cout << "0";
        else {
            MaTran z;
            z.a = 1; z.b = 1; z.c = 1; z.d = 0;
            cout << powMod(z, n);
        }
        cout << endl;
    }
}