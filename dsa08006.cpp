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
        q.push("9");

        while (!q.empty())
        {

            string num = q.front();
            q.pop();
            if (stoi(num) % n == 0)
            {
                cout << num << " ";
                break;
            }
            q.push(num + "0");
            q.push(num + "9");
        }

        cout << endl;
    }

    return 0;
}
