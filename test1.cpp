#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int b[15], ok, stt;
ll n, m;

void khoitao() {
    for (int i = 1; i <= n; i++) b[i] = i;
}

void permutationGen() {
    int i = n-1;
    while ( b[i] > b[i+1] ) i--;
    if (i==0) ok = 1;
    else {
        int j = n;
        while( b[j] < b[i]) j--;
        swap(b[i], b[j]);
        reverse(b + i + 1, b + n + 1);
        stt++;
    }
}

void in() {
    for (int i=1; i<= n; i++) cout << b[i] << " ";
    cout << endl;
}

int main() {
    cin >> n >> m;
    khoitao();
    stt = 1;
    while(ok==0) {
        if(stt%m==0) {
            in();
        }
        permutationGen();
    }
    
}