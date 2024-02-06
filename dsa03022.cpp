#include <bits/stdc++.h>

using namespace std;

void max(vector <int> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    cout << v[n-1];
}


int main() {
    int n; cin >> n;
    int a[n];
    for (int i =0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    vector <int> v;
    v.push_back(a[0] * a[1]);
    v.push_back(a[0] * a[1] * a[n-1]);
    v.push_back(a[n-2] * a[n-1]);
    v.push_back(a[n-3] * a[n-2] * a[n-1]);
    max(v);

    
}