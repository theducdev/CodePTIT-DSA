#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// hàm kiểm tra xem n có phải snt hay không
int checksnt(int n) {
    if(n== 0 || n==1) return 0; 
    for(int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {   
        int n; cin >> n;
        int ok = 0;
        // duyệt từ 2 đến n, kiểm tra xem i và n-i có đồng thời là snt hay không, nếu có thì in
        for (int i = 2; i < n; i++) {
            if (checksnt(i) && checksnt(n-i)) {
                ok = 1;
                cout << i << " " << n-i;
                break;
            }
        }
        if(ok == 0) cout << "-1";
        
        cout << endl;
    }
    
}