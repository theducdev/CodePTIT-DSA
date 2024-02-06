#include <bits/stdc++.h>
using namespace std;

int chuyen(string s, int a, int b) {
    if (s == "+") return a+b;
    if (s == "-") return a-b;
    if (s == "*") return a*b;
    if (s == "/") return a/b;
    return 0;
}

int main() {
    int t; cin >> t;
    while(t--) {
        vector <string> input;
        int n; cin >> n;
        while(n--) {
            string s; cin >> s;
            input.push_back(s);
        }
        queue <int> Q;
        reverse(input.begin(), input.end());
        for (auto x : input) {
            if (x == "+" || x == "-" || x == "*" || x == "/" ) {
                int b = Q.front(); Q.pop();
                int a = Q.front(); Q.pop();
                Q.push(chuyen(x, a, b));
            }
            else Q.push(stoi(x));
        }
        cout << Q.front() << endl;
    }
}