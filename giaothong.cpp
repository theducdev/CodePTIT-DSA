#include <bits/stdc++.h>

using namespace std;

// mảng truoc dùng để lưu đỉnh trước đó của đỉnh đang xét 
int truoc[10005];
bool used[10005];
int so[1005];
vector<int> ds[10005];
void DFS(int u)
{
    // duyệt từ đỉnh đề bài yêu cầu
    used[u] = 1;
    // duyệt tất cả các đỉnh kề với nó
    for (int x : ds[u])
    {
        // nếu đỉnh đó chưa được thăm thì
        if (!used[x])
        {
            // thăm đỉnh đó, đồng thời gán giá trị đỉnh trước nó vào truoc
            truoc[x] = u;
            // DFS nó
            DFS(x);
        }
    }
}
// hàm induongdi dùng hàm trước để in ra đường đi cần tìm, nếu không có thì in ra -1
void induongdi(int s, int t)
{

    // DFS đỉnh bắt đầu đề bài cho
    DFS(s);
    // nếu đỉnh kết thúc chưa được thăm thì in -1
    if (used[t] == 0)
    {
        cout << "-1";
    }
    // nếu đã được thăm thì
    else
    {
        // tạo vector ans để in kq
        vector<int> ans;
        // dùng while để push đường đi vào trong ans
        while (t != s)
        {
            so[t]++;
            // gán t = truoc[t] để giật lùi lại, ví dụ t = 6, sau đó gán t = truoc[6] = 5, sau đó gán t = truoc[5] = 4, ... cho đến khi t = s thì thôi
            t = truoc[t];
        }
        // sau đó push nốt s vào
        so[s]++;
        // đảo chiều ans do đang in ngược
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s, k;
        cin >> n >> m >> s >> k;
        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            ds[x].push_back(y);
            ds[y].push_back(x);
        }
        memset(used, 0, sizeof(used));
        memset(truoc, 0, sizeof(truoc));
        memset(so, 0, sizeof(truoc));
        induongdi(s, k);
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if(so[i]>1 && i!= s && i != k) cnt++;
        }
        
        cout << cnt;
        for (int i = 1; i <= n; i++)
            ds[i].clear();
        cout << endl;
    }
}