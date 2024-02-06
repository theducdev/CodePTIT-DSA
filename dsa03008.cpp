#include <bits/stdc++.h>
using namespace std;

struct data {
    int s, e;
};

bool cmp(data a, data b) {
    if (a.e < b.e) return true;
    return false;
}


int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        data ds[n];
        for(int i =0; i <n; i++) cin >> ds[i].s;
        for(int i =0; i <n; i++) cin >> ds[i].e;
        sort(ds, ds+n, cmp);
        int cnt = 1, j = 0;
        for (int i = 1; i < n; i++) {
            if (ds[i].s >= ds[j].e){
                cnt++;
                j=i;
            }
        }
        cout << cnt << endl;

    }


    
}