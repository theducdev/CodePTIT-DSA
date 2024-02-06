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
        long long n;
        cin >> n;

        queue<string> q;
        q.push("1");

        while (!q.empty())
        {

            string num = q.front();
            q.pop();
            if (stoll(num) % n == 0)
            {
            cout << num << " ";
            break;
            }
            q.push(num + "0");
            q.push(num + "1");
        }

        cout << endl;
    }

    return 0;
}
