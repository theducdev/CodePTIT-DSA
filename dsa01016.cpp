#include <bits/stdc++.h>

using namespace std;

int n;
int a[25];
// in các số từ 1 đến số áp chót cùng với dấu cách, sau đó in số cuối cùng với dấu đóng ngoặc
void in(int i)
{
    cout << "(";
    for (int m = 1; m <= i - 1; m++)
        cout << a[m] << " ";
    cout << a[i] << ") ";
}

// biến i dùng để lần lượt lưu các giá trị vào mảng a để in
// biến s dùng để tính tổng còn lại sau khi đã thêm 1 số vào mảng
// biến x là số sẽ thêm vào mảng
void quaylui(int x, int i, int s)
{
    // thêm các số từ x đến 1, khi không thêm được nữa thì in ra, nếu thêm được nữa thì tiếp tục quay lui
    
    for (int j = x; j >= 1; j--) {
        a[i] = j;
        if (j == s) in(i);
        else if (j < s) quaylui(j, i+1, s-j);
    }
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        quaylui(n, 1, n);
        cout << endl;
    }
}





