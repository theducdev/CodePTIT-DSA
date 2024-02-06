#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {   
        set <char> set;
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++) set.insert(s[i]);
        for (auto x : set) {
            if (x >= '0' && x <= '9') cout << x << " ";
        } 
        cout << endl;
    }
    
}