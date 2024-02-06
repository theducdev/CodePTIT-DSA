#include <bits/stdc++.h>
using namespace std;
int b[100], n;
int OK = 0;


void in(int b[], int n) {
    for (int i = 1; i<=n; i++) cout << b[i];
    cout << " ";
}

void permutationGen(int b[], int n) {
    int i = n-1;
    while ( b[i] > b[i+1] ) i--;
    if (i==0) OK = 1;
    else {
        int j = n;
        while( b[j] < b[i]) j--;
        swap(b[i], b[j]);
        reverse(b + i + 1, b + n + 1);
        }
  
}

int main () {
    int t; cin >> t; 
    while(t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) b[i] = i;
        while(!OK) {
            in(b, n);
            permutationGen(b, n);
        }
        cout << endl;
        OK = 0;
    }
}