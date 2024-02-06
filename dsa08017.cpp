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
        q.push("6");
        vector<string> v;

        while (!q.empty())
        {

            string num = q.front();
            if (num.size() > n)
            {
                break;
            }
            v.push_back(num);
            q.pop();
            if (q.empty())
                q.push("8");
            q.push(num + "6");
            q.push(num + "8");
        }
        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i] << " ";

        cout << endl;
    }

    return 0;
}
