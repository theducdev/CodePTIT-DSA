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
        int dem = 0;
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i]; 
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if(a[j] + a[i] == k) dem++;
            }
            
        } 
        cout << dem;
        cout << endl;
    }
    
}