#include <bits/stdc++.h>

using namespace std;

int k, n, p ,s, ok = 0, dem = 0;
int a[100];


void khoitao() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}



void sinhtohop() {
    int i = k;
    while (i > 0 && a[i] == n - k + i ) i--;
    if (i == 0) ok = 1;
    else {
        a[i]++;
        for( int j = i+1; j <= k; j++) {
            a[j] = a[j-1] + 1;
        }
    }
}

int main() {
    // nhập vô hạn cho đến khi gặp điều kiện dừng
    while(1) {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            return 0;
        // vector snt để nhập các số từ 1 đến n
        vector <int> snt;
        for (int i = 1; i <= n; i++) {
            snt.push_back(i);
        }
        if (k <= n) {
            khoitao();
            while(ok == 0) {
                int sum = 0;
                // tính tổng các số của dãy vừa tìm được
                for(int i = 1; i <= k; i++) {
                    sum+=snt[a[i]-1];
                }
                // nếu thoả mãn thì đếm
                if (sum == s) {
                    dem++;
                }
                sinhtohop();
            }
            cout << dem <<endl;
            snt.clear();
            ok = 0;
            dem = 0;
        } 
        else cout << "0" << endl;
    }
}