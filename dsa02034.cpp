#include <bits/stdc++.h>

using namespace std;

int n, check[100];

void Try (string s) {
    int k = s.size();
    if (s.size() == n) {
        cout << s << endl;
    }
    for (int i = 1; i <= n; i++)
        if (k == 0 || (check[i]==0 && abs(s[k - 1] - '0' - i) != 1))
        {
            check[i] = 1;
            Try(s + to_string(i));
            check[i] = 0;
        }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        Try("");      
    }  
}