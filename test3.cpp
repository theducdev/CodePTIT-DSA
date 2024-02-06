#include <bits/stdc++.h>
using namespace std;


int tinh(int a, int b, string c) {
    if (c=="+") return a+b;
    if (c=="-") return a-b;
    if (c=="*") return a*b;
    if (c=="/") return a/b;
    return 0;
}


int main() {
    int t; cin >> t;
    while(t--) {
        vector <string> a;
        int n; cin >> n;
        while(n--) {
            string s; cin >> s;
            a.push_back(s);
        }
        stack <int> st;
        int check = 1;
        if (a[0] == "+" ||a[0] == "-" ||a[0] == "*" ||a[0] == "/"  ) {reverse(a.begin(), a.end());check =0;}
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == "+" ||a[i] == "-" ||a[i] == "*" ||a[i] == "/"  ) {
                if (check ==1) {
                    int b = st.top(); st.pop();
                    int c = st.top(); st.pop();
                    st.push(tinh(c,b, a[i]));

                }
                else {
                    int c = st.top(); st.pop();
                    int b = st.top(); st.pop();
                    st.push(tinh(c,b, a[i]));
                }
            }
            else st.push(stoi(a[i]));
        }
        cout << st.top() << endl;
    }
}