#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1e9 +7;
int n;

struct MaTran {
    ll a[11][11];
};

MaTran operator * (MaTran x, MaTran y) {
    MaTran z;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vector <ll> hang, cot;
            for(int q = 0; q < n; q++) {
                hang.push_back(x.a[i][q]);
                cot.push_back(y.a[q][j]);
            }
            ll sum = 0;
            for(int p = 0; p < n; p++) {
                sum+= hang[p]*cot[p]%m;
                sum%=m;
            }
            z.a[i][j] = sum;
            sum = 0;
            hang.clear();
            cot.clear();
        }
    }
    return z;
}

istream &operator >> (istream &is, MaTran &mt) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            is >> mt.a[i][j];
        }
    }
    return is;
}

ostream &operator << (ostream &os, MaTran mt) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum+= mt.a[i][n-1];
        sum%=m;
    }
    os << sum;
    return os;
}

MaTran powMod(MaTran q, ll n) {
    if(n == 1) return q;
    MaTran w = powMod(q, n/2);
    if (n %2 == 0) return w*w;
    return q*w*w; 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll k; cin >> n>> k;
        if (n == 0 ) cout << "0";
        else {
            MaTran z;
            cin >> z;
            cout << powMod(z, k);
        }
        cout << endl;
    }
}