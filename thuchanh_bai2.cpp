#include <bits/stdc++.h>
using namespace std;
int n; vector <string> vt;

bool cmp(string a, string b) {
    if (a.length()!= b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}
void Try(string s, int A, int B, int C) {
    if(s.length() > n) return;
    if(A<= B && B <= C && A > 0 && B > 0 && C > 0) {
        vt.push_back(s);
    }
    Try(s+ 'A', A+1, B, C);
    Try(s+ 'B', A, B+1, C);
    Try(s+ 'C', A, B, C+1);
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    Try("", 0, 0, 0);
    sort(vt.begin(), vt.end(), cmp);
    for (auto x : vt) cout << x << endl;
    
    

}