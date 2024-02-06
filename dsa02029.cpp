#include <bits/stdc++.h>
using namespace std;

void Thap_Hanoi(int n, char a, char b, char c) {
    if (n == 1) cout << a << " -> " << c<< endl;
    else {
        Thap_Hanoi(n-1, a, c, b);
        Thap_Hanoi(1, a, b, c);
        Thap_Hanoi(n-1, b, a, c);
    }
}

int main() {
    int n; cin >> n; 
    Thap_Hanoi(n, 'A', 'B', 'C');
}