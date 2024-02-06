#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int k;
struct phantu {
    int gt, kc; 
};

bool cmp(phantu a, phantu b) {
    if (a.kc < b.kc) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> k;
        phantu a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].gt;
            a[i].kc = abs(k - a[i].gt);
        }
        stable_sort(a, a+n, cmp);
        for (int i = 0; i < n; i++) {
            cout << a[i].gt << " ";
        }
        cout << endl; 
    }
}