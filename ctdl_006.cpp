#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_set <int> s;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    vector <int> v(s.begin(), s.end());
    reverse(v.begin(), v.end());
    for (int x : v) {
        cout << x << " ";
    }
}