#include <bits/stdc++.h>

using namespace std;

int k, n, p ,s, ok = 0, dem = 0;
int a[100];


void khoitao() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}

void in(vector <int> snt, int s) {
    int sum = 0;
    for(int i = 1; i <= k; i++) {
        sum+=snt[a[i]-1];
    }
    // if (sum == s) {
    //     for(int i = 1; i <= k; i++) 
    //     cout << snt[a[i] - 1] << " ";
    //     cout << endl;
    // }
    if (sum == s) {
        for(int i = 1; i <= k; i++) 
        cout << snt[a[i] - 1] << " "; 
        cout << endl;
    }
}

int checksnt(int n) {
    int check = 1;
    if (n==0 || n == 1) check = 0;
    else for(int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {check = 0;break;}
    }
    return check;
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
    int t; cin >> t;
    while(t--) {
        cin >> n >> p >> s;
        vector <int> snt;
        for (int i = p+1; i < s; i++) {
            if (checksnt(i)) snt.push_back(i);
        }
        if (n <= snt.size()) {
            k = n;
            n = snt.size();
            khoitao();
            while(ok == 0) {
                sinhtohop();
                int sum = 0;
                for(int i = 1; i <= k; i++) {
                    sum+=snt[a[i]-1];
                }
                if (sum == s) {
                    dem++;
                }
            }
            ok = 0;
            cout << dem << endl;
            khoitao();
            while(ok == 0) {
                in(snt, s); 
                sinhtohop();
            }
            ok = 0;
            snt.clear();
            dem = 0;
        } 
        else cout << "0" << endl;
    }
}