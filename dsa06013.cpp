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
        int n, k; cin >> n >> k;
        int a[n]; 
        int b[n] = {0};
        for (int i = 0; i < n; i++) {cin >> a[i]; b[a[i]]++;}
        
        if(b[k] == 0) cout << "-1";
        else cout << b[k];
        cout << endl;
    }
    
}