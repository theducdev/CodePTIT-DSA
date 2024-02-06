#include <bits/stdc++.h>
using namespace std;

int qhd(string a, string b)
{
    int f[105][105];
    for (int i = 0; i <= a.size(); i++) {
        for (int j = 0; j <= b.size(); j++) {
            if(i == 0 || j == 0) f[i][j] = i+j;
            else if(a[i-1]== b[j-1]) f[i][j] = f[i-1][j-1];
            else f[i][j] = min(f[i][j-1], min(f[i-1][j], f[i-1][j-1])) + 1; 
        }
    }
    return f[a.size()][b.size()];
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << qhd(a,b) << endl;
    }
}