#include <bits/stdc++.h>

using namespace std;
// mảng a để lưu ma trận bài cho
int n, ok, a[11][11];
// vector ans dùng để lưu các đường đi
vector<string> ans;

void Try(int i, int j, string s)
{
    // điều kiện dừng là đi được đến đích
    if (i == n && j == n)
    {   
        ans.push_back(s);
    }
    // hoặc nếu i còn xuống dưới được thì đi xuống
    if (i < n && a[i + 1][j] == 1)
        Try(i + 1, j, s + "D");
    // hoặc nếu j còn sang phải được thì sang phải
    if (j < n && a[i][j + 1] == 1)
        Try(i, j + 1, s + "R");
}

int main() {
    int t; cin >> t;
    while(t--) {
        ans.clear();
        cin >> n;
        for (int i = 1; i <=n ;i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
        // nếu phần tử đầu tiên bằng 1 thì mới thử
        if (a[1][1] == 1)
            Try(1, 1, "");
        // nếu ans k có cái gì thì in ra -1
        if (ans.size() == 0)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
   
}