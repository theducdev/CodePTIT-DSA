#include <bits/stdc++.h>

using namespace std;

bool cmp(long long a, long long b) {
    return a > b;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long a[n], b[n];
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a[i] = x;
            if (x == 0) cnt1++;
        }
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            b[i] = x;
            if (x == 0) cnt2++;
        }
        sort(a, a+n);
        sort(b, b+n);
        int cnt = abs(cnt1 - cnt2);
        long long sum = 0;
        vector <long long> a1, b1;
        for(int i = 0; i < n-cnt2 && i + cnt1 < n; i++) {
            a1.push_back(a[i+cnt1]);
        }
        for(int i = 0; i < n-cnt1 && i + cnt2 < n; i++) {
            b1.push_back(b[i+cnt2]);
        }
        sort(b1.begin(), b1.end(), cmp);

        int z = a1.size();
        if(cnt1 > 0 && cnt2 > 0) {
            for (int i = 0; i < z - abs(cnt1 - cnt2); i++) {
                sum += a1[i]*b1[i];
            }
        } 
        else {
            for (int i = 0; i < z ; i++) {
                sum += a1[i]*b1[i];
            }
        }
        if (cnt1 + cnt2 >= n) cout << "0";
        else cout << sum;
        cout << endl;

    }
}
