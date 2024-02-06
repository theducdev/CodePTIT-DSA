#include <bits/stdc++.h>
using namespace std;

int ok = 0, n;
long long a[25];
long long ans = 0;

void in(int k)
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}
// chuyển mảng vừa tìm được sang dạng số
long long chuyen(long long a[], int k)
{
    long long sum = 0;
    for (int i = 0; i <= k; i++)
        sum = sum * 10 + a[i];
    return sum;
}
// sinh nhị phân
void binaryGen(int k)
{
    int i = k;
    while (i > 0 && a[i] == 9)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 1;
    }
    else
        a[i] = 9;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n; 
        for (int k = 1; k <= n; k++)
        {
            // nếu chưa tìm được thì mới tìm, để tối ưu
            if (ans == 0) {
                for (int i = 1; i <= k; i++)
                    a[i] = 0;
                while (ok == 0)
                {
                    // kiểm tra xem số tìm được có chia hết cho n và có khác 0 không ?
                    if (chuyen(a, k) % n == 0 && chuyen(a, k) != 0)
                    {
                        ans = chuyen(a, k);
                        // nếu có thì dừng luôn
                        break;
                    }
                    binaryGen(k);
                }
                ok = 0;

            } 
        }
        cout << ans << endl;
        ans = 0;
    }
}