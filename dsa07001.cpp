#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    stack <long long > ans;
    while(cin >> s) {
        long long n;
        if(s == "push") {
            cin >> n;
            ans.push(n);
        }
        else if(s == "pop") {
            if (!ans.empty()) ans.pop();
            else {
                cout << "empty";
                break;
            }
        }
        else if (ans.empty()) {
            cout << "empty";
            break;
        }
        else {
            vector <long long> v;
            while(!ans.empty()) {
                long long x = ans.top();
                v.push_back(x);
                ans.pop();
            }
            reverse(v.begin(), v.end());
            for(auto q:v) {cout << q << " ";ans.push(q);}
            cout << endl;
        }



    }
}