#include <bits/stdc++.h>

using namespace std;

long long chuyendoi(vector <int> v) {
    int n = v.size();
    long long so = 0;
    for (int i = 0; i < n; i++) {
        so += v[i]*pow(10, n-i-1);
    }
    return so;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <int> v;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x != 0) v.push_back(x);
        }
        sort(v.begin(), v.end());
        vector <int> v1;
        vector <int> v2;

        for(int i = 0; i < v.size(); i++) {
            if (i %2== 0) v1.push_back(v[i]);
            else v2.push_back(v[i]);
        } 
        

        if (v1.size() == 0) v1.push_back(0);
        if (v2.size() == 0) v2.push_back(0);

        cout << chuyendoi(v2) + chuyendoi(v1)  << endl;
    }    
    
}