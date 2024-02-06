#include <bits/stdc++.h>

using namespace std;

int n;
int a[25];
int dem = 0;
void in(int i)
{
    cout << "(";
    for (int m = 1; m <= i - 1; m++)
        cout << a[m] << " ";
    cout << a[i] << ") ";
}

void quaylui(int x, int i, int s)
{
    for (int j = x; j >= 1; j--)
    {
        a[i] = j;
        if (j == s)
            {i = 1;dem++;}
        else if (j < s)
            quaylui(j, i + 1, s - j);
    }
}
void quaylui999(int x, int i, int s)
{
    for (int j = x; j >= 1; j--)
    {
        a[i] = j;
        if (j == s)
            in(i);
        else if (j < s)
            quaylui999(j, i + 1, s - j);
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
        cout <<dem;
        cout << endl;
        quaylui999(n,1,n);
        dem = 0;
        cout << endl;
    }
}