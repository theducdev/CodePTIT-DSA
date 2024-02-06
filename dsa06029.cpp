#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> a(n);
	stack<vector<int>> st;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
        int t = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > t) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;
        st.push(a);
    }
    n--;
	int b = st.size();
	while (st.size())
	{
		a = st.top();
		st.pop();
		cout << "Buoc " << n-- << ": ";
		b--;
        for (int k = 0; k <= b ; k++)
            cout << a[k] << " ";
        cout << endl;
	}
}