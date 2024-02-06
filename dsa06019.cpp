#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
struct phantu {
    int gt, xh;
};

bool cmp(phantu a, phantu b) {
    if(a.xh > b.xh) return true;
    if(a.xh==b.xh && a.gt < b.gt) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {   
        int n; cin >> n;
        if (n <= 0 || n > 100000) {
            continue;
        }
        phantu a[n];
        int b[1000] = {0};
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a[i].gt = x;
            b[x]++;
        }
        for (int i = 0; i < n; i++) {
            a[i].xh = b[a[i].gt];
        }
        sort(a, a+n, cmp);
        for (auto x : a) cout << x.gt <<" ";
        
        cout << endl;
    }
    
}