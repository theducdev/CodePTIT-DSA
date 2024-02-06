#include <bits/stdc++.h>
using namespace std;
int n; string s;
int used[100];
vector <string> ans1;
vector <string> ans2;


void Try1(int i ) {
    for (int j = 1; j <= n; j++) {
        s[i] = j + '0';
        if(i == n - 1) ans1.push_back(s);
        else Try1(i+1);
    }
}

void Try2(int i ) {
    for (int j = 1; j <= n; j++) {
        if(used[j] == 0) {
            used[j] = 1;
            s[i] = (j-1) + 'A';
            if (i == n-1) {
                ans2.push_back(s);
            }
            else Try2(i+1);
            used[j] = 0;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    s.resize(n);
    Try1(0); Try2(0);
    for (string i : ans2) {
        for (string j : ans1) cout << i << j<< endl;
    }
    
    cout << endl;
    

}