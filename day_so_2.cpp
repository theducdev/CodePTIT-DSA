#include <bits/stdc++.h>

using namespace std;
// tạo 1 map để lưu cấu hình và thứ tự của cấu hình
map<int, vector<int>> mp;
// hàm quay lui
void Solve(vector<int> a, int n)
{
    if (n > 0)
    {
        // gán thứ tự của vector a là n
        mp[n] = a;
        // cập nhật cấu hình mới
        for (int i = 0; i < n - 1; i++)
            a[i] += a[i + 1];
        // vứt phần tử cuối cùng đi
        a.pop_back();
        // quay lui cấu hình tiếp theo
        Solve(a, n - 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        // gọi hàm solve lưu các cấu hình vào mp
        Solve(a, n);
        // duyệt lần lượt mp
        for (auto x : mp)
        {
            // biến dem dùng để kiểm tra xem nó có phải phần tử cuối cùng không, nếu đúng là thì ra "]"
            int dem = 0;
            cout << "[";
            for (auto s : x.second)
            {
                cout << s;
                dem++;
                if (dem < x.second.size())
                    cout << " ";
                else
                    cout << "] ";
            }
        }
        cout << '\n';
        mp.clear();
        a.clear();
        cout << endl;
    }
}