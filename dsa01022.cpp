#include <bits/stdc++.h>

using namespace std;

int ok = 0;
int n, k, a[100], b[100];

void khoitao() {
    for(int i = 1; i <= n; i++) {
        a[i] = i;
    }
}
// ham sinh hoan vi
void permutationGen() {
    int i = n - 1;
    while(i > 0 && a[i] > a[i+1]) i--;
    if (i == 0) ok = 1;
    else {
        int j = n;
        while(a[j] < a[i]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + 1 + n);
    }
}

// ham kiem tra xem cau hinh hien tai co phai la cau hinh de bai hay khong
int check() {
    for (int i = 1; i <= n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}


int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        khoitao();
        for(int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        int stt = 1;
        while (ok == 0 ) {
            if(check() == 1) {
                cout << stt;
                break;
            }
            else {
                stt++;
                permutationGen();
            }
        }
        cout << endl;
    }
}