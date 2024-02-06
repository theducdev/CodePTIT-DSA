#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        int t = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > t) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
        cout << "Buoc " << i<< ": ";
        for (int k = 0; k <= i; k++)
            cout << a[k] << " ";
        cout << endl;
    }
    
    
    
}