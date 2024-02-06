#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int b[100] = {0};
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            b[s[i]]++;
        }
        priority_queue<int> pq;
        for (auto x : b)
        {
            if (x != 0)
                pq.push(x);
        }

        while (k--)
        {
            int x = pq.top();
            pq.pop();
            pq.push(x - 1);
        }
        long long sum = 0;
        while (!pq.empty())
        {

            int x = pq.top();
            sum += pow(x, 2);
            pq.pop();
        }
        cout << sum << endl;
    }
}
