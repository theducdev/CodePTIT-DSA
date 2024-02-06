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
    for(int i = 0; i < n-1; i++) {
        int min = *min_element(a+i+1, a+n);
        for (int j = i+1; j < n; j++) {
            if (a[j] == min && a[i] > min) {
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << i + 1 << ": ";
        for (auto x : a) cout << x << " ";
        cout << endl;
    }
    
}