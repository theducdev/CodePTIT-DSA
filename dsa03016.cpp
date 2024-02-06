#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int s, d; cin >> s >> d;
        if (s>9*d ) {
            cout << "-1";
        }
        else if (d == 0) {
            cout << "-1";
        }
        else if (s == 0) {
            cout << "-1";
        }
        else {
            int sum = 0;
            int digits[d];
            digits[0] = 1;
            sum += digits[0];

            for (int i = d-1; i >= 1; i--) {
                digits[i] = min(9, s - sum);
                sum += digits[i];
            }

            digits[0] = s - sum +1;

            for (int i = 0; i < d; i++) {
                cout << digits[i];
            }
        }
        cout << endl;
        
    }

}