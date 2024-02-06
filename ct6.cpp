#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        queue<string> q;
        q.push("0");
        q.push("1");
        q.push("2");
        int stt = 0;

        while (!q.empty())
        {

            string num = q.front();
            q.pop();

            if (stt == n)
            {
                break;
            }
            int so2 = 0;
            for (int i = 0; i < num.size(); i++)
            {
                if (num[i] == '2')
                    so2++;
            }
            if (so2 > num.size() / 2)
            {
                if (num[0] != '0')
                {
                    stt++;
                    cout << num << " ";
                }
            }
            q.push(num + "0");
            q.push(num + "1");
            q.push(num + "2");
        }
        cout << endl;
    }

    return 0;
}
