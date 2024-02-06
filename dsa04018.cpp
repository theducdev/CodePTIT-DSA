#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int BinarySearch(int a[], int l, int r, int k) {
    if (l > r) return -1;
    int mid = (l+r)/2;
    if (k == a[mid]) return mid;
    if (k < a[mid]) return BinarySearch(a, l, mid-1, k);
    return BinarySearch(a, mid+1, r, k);

}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n+1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        if (BinarySearch(a, 1, n, k) == -1) cout << "NO";
        else cout << BinarySearch(a, 1, n, k );
        cout << endl;


        
        
    }

}