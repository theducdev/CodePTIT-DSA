#include <bits/stdc++.h>

using namespace std;
long long m = 1e9 + 7;

long long chuyensang10(long long n, long long k) {
    long long sum = 0;
    int stt = 0;
    while(n) {
        sum += (n%10)*pow(k, stt);
        n/=10;
        stt++;
    }
    return sum;
}

void convertToBaseK(int n, int k) {
    int remainder;
    string result = "";

    while (n > 0) {
        remainder = n % k;
        result = to_string(remainder) + result;
        n /= k;
    }

    cout << result << endl;
}


int main() {
    int t; cin >> t;
    while(t--) {
        long long k , a, b; cin >> k >> a >> b;
        long long x = chuyensang10(a, k)+chuyensang10(b, k);
        convertToBaseK(x, k);        
        
    }
}
