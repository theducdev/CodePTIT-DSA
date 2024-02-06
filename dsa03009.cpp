#include <bits/stdc++.h>
using namespace std;

struct cv {
    int a, b, c;
};
bool cmp(cv x, cv y ) {
    return x.c > y.c;
}


int used[1005];

int main() {
    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        cv ds[n];
        memset(used, 0, sizeof(used));
        for (int i = 0; i < n; i++) {
            cin >> ds[i].a >> ds[i].b >> ds[i].c;
        }
        sort(ds, ds +n, cmp);
        long long sum = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = ds[i].b - 1; j >= 0; j--) {
                if(used[j] == 0) {
                    used[j] = 1;
                    cnt++;
                    sum+=ds[i].c;
                    break;
                }
            }
        }
        cout << cnt << " " << sum << endl;
    }

}