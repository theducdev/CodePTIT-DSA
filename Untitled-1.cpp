#include <bits/stdc++.h>
#define For(i,a,b) for(long long i = a; i <= b; i++)
#define foR(i,a,b) for(long long i = a; i >= b; i--)
using namespace std;
const int N = 200;

struct point {
	int x, y, step; // toa do va so buoc can di de den diem do
};

void solve() {
	queue<point> q;
	int a[3000][3000];
	int MIN;
	
	int n , m;
	cin >> n >> m;
	For(i,1,n) {
		For(j,1,m) {
			cin >> a[i][j];
		}
	}

	// khoi tao
	MIN = INT_MAX;
	q.push({1,1,0}); // diem bat dau(1,1) va buoc ban dau = 0
	
	while(!q.empty()) {
        point u = q.front(); q.pop();
		if(u.x == n && u.y == m) { // neu den diem cuoi a[n][m]
		MIN = min(MIN, u.step); // cap nhat buoc di nho nhat
		}
		else {
			if(u.x + a[q.front().x][q.front().y] <= n) { // neu chua den hang cuoi
				q.push({q.front().x + a[q.front().x][q.front().y],    q.front().y,    q.front().step + 1}); // A[i+A[i][j]][j], cap nhat step_sau = step_truoc + 1
			}
			if(q.front().y + a[q.front().x][q.front().y] <= m) { // neu chua den hang cuoi 
				q.push({q.front().x,    q.front().y + a[q.front().x][q.front().y],    q.front().step + 1}); // A[i][j+A[i][j]], cap nhat step_sau = step_truoc + 1
			}
		}
	}
	if(MIN == INT_MAX) cout << -1 << endl;
	else cout << MIN << endl;
}

int main() {
	int test; cin>>test;
	For(w,1,test) {
		solve();
	}
}


