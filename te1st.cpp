#include <bits/stdc++.h>
using namespace std;

vector <int> left(vector<int> a) {
    vector <int> b = {1,2,3,4,5,6};
    int a0 = a[0];
    int a1 = a[1];
    int a3 = a[3];
    int a4 = a[4];
    b[0] = a3;
    b[1] = a0;
    b[3] = a4;
    b[4] = a1;
    b[2] = a[2];
    b[5] = a[5];
    return b;
}

vector <int> right(vector<int> a) {
    vector <int> b = {1,2,3,4,5,6};
    int a2 = a[2];
    int a1 = a[1];
    int a5 = a[5];
    int a4 = a[4];
    b[5] = a2;
    b[1] = a4;
    b[2] = a1;
    b[4] = a5;
    b[3] = a[3];
    b[0] = a[0];
    return b;
}
    




int main() {
    int t; cin >> t;
    while(t--) {
        vector <int> in, out;
        for(int i = 1; i <= 6; i++) {
            int x; cin >> x;
            in.push_back(x);
        }
        // for(int i = 1; i <= 6; i++) {
        //     int x; cin >> x;
        //     out.push_back(x);
        // }
        for(auto x :right(in)) cout << x << " ";
        cout << endl;
        for(auto x :left(right(in))) cout << x << " ";



    }

}