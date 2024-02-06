#include <iostream>
#include <string>
#include <queue>
using namespace std;

int binToDec(string bin)
{
    int result = 0;
    int base = 1;

    for (int i = bin.length() - 1; i >= 0; i--)
    {
        if (bin[i] == '1')
        {
            result += base;
        }
        base *= 2;
    }

    return result;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        queue<string> q;
        q.push("1");

        while (!q.empty())
        {

            string num = q.front();
            q.pop();
            cout << num << " ";
            if (binToDec(num) == n)
            {
                break;
            }
            q.push(num + "0");
            q.push(num + "1");
        }

        cout << endl;
    }

    return 0;
}
