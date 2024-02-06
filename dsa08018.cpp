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
        int cnt = 0;

        while (!q.empty())
        {

            string num = q.front();
            if (num.size() > n)
            {
                break;
            }
            v.push_back(num);
            q.pop();
            cnt++;
            if (q.empty())
                q.push("8");
            q.push(num + "6");
            q.push(num + "8");
        }
        cout << cnt << endl;
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
    }

    return 0;
}
