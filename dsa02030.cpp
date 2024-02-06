#include <bits/stdc++.h>
using namespace std;

int k;
char c, a[1001];

void in() {
    for (int i = 1; i <= k; i++) cout << a[i];
    cout << endl;
}

void Try (int i, char h) {
    for (char j = h; j <= c; j++) {
        a[i] = j; 
        if(i == k) in();
        else Try(i+1, j);
    }
}

int main() {
    cin >> c >> k;
    Try(1, 'A');
    

}