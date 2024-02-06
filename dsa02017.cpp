#include <bits/stdc++.h>
using namespace std;

int n, a[10], xuoi[10], nguoc[10], x[10], banco[10][10];
set<long long> kq;


void in() {
    long long sum = 0;
    for (int i =1; i <=8; i++) {
        sum+=banco[i][x[i]];
    }
    kq.insert(sum);
}

void khoitao() {
    for (int i =1; i <= 10; i++) a[i] = xuoi[i] = nguoc[i] = 0;
}

void Try(int i) {
    for(int j =1; j <= n; j++) {
        if (a[j]==0 && xuoi[i-j+n]==0 && nguoc[i+j-1]==0) {
            x[i] = j; a[j] = 1;
            xuoi[i-j+n] = 1;
            nguoc[i+j-1] = 1;
            if(i==n) in();
            else Try(i+1);
            a[j] = 0;
            xuoi[i-j+n] = 0;
            nguoc[i+j-1] = 0;
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j<= 8; j++) {
                cin >> banco[i][j];
            }
        }
        khoitao();
        n = 8;
        Try(1);
        cout << *kq.rbegin() << endl;
        kq.clear();
    }
}