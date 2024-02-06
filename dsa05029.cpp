#include <iostream>
#include <cstring>
using namespace std;

int tinh(string s) {
    int n = s.length();
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    if(s[0] == '0') dp[1] = 0;
    else dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        int giaima1 = stoi(s.substr(i-1, 1));
        int giaima2 = stoi(s.substr(i-2, 2));
        if (giaima1 >= 1 && giaima1 <= 9) {
            dp[i] += dp[i-1];
        }
        if (giaima2 >= 10 && giaima2 <= 26) {
            dp[i] += dp[i-2];
        }
    }
    return dp[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << tinh(s) << endl;
    }
    return 0;
}