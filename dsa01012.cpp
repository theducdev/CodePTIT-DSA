#include <bits/stdc++.h>

using namespace std;

int n, a[10000], ok = 0;
// sinh nhị phân
void BinaryGen() {
    int i = n;
    while( i > 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i == 0 ) ok = 1;
    else a[i] = 1;
}
// in ra phần tử đầu tiên, phần tử thứ 2 trở đi thì xor với phần tử trưỡc đó, rồi in
void in() {
    cout << a[1];
    for(int i = 2; i <= n; i++) {
        int x = a[i] ^ a[i-1];
        cout << x;
    }
    cout << " ";
}


int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n ; i++) a[i] = 0;
        while(ok==0) {
            in(); BinaryGen();
        }
        ok = 0;
        cout << endl;      
    }
}