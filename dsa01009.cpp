#include <bits/stdc++.h>

using namespace std;

int ok = 0, n, k;
int a[1000];
void khoitao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}
// hàm kiểm tra xem có bao nhiêu dãy k kí tự A liên tiếp, trả về số dãy đó
int check() {
    int check = 0;
    for (int i = 1; i <= n-k+1; i++) {
        if (a[i] == 0 ) {
            int sum = 0;
            // cộng k só tính từ i vào sum, nếu sum = 0 thì k số đó chỉ toàn A
            for (int j = i; j <= i+k-1; j++) sum+=a[j];
            if(sum == 0) check++;
        } 
    }
    return check;
}
// hàm sinh nhị phân
void BinaryGen() {
    int i = n;
    while (i > 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0 ) ok = 1;
    else {
        a[i] = 1;
    }
}

void in() {
    for( int i = 1; i <= n; i++) {
        if (a[i] == 1) cout << "B";
        else cout << "A";
    }
}
// hàm tính số xâu thoả mãn (nếu check trả về 1 thì xâu đó thoả mãn)
int sothoaman() {
    int cnt = 0;
    khoitao();
    while(ok == 0) {
        if(check() == 1) cnt++;
        BinaryGen();
    }
    return cnt;
}

int main() {   
    cin >> n >> k;
    cout << sothoaman() << endl;
    ok = 0;
    khoitao();
    while(ok == 0) {
        if (check() == 1) {
            in();
            cout << endl;
        }
        BinaryGen();  
    }
}