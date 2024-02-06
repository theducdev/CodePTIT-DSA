#include <bits/stdc++.h>

using namespace std;

int a[1000], ok = 0, n, k;
// hàm sinh tổ hợp
void CombinationGen() {
    int i = k;
    while( i > 0 && a[i] == n-k+i) i--;
    if (i == 0) ok = 1;
    else {
        a[i]++;
        for (int j = i+1; j <= k; j++) a[j]= a[j-1] + 1;
    }
} 
// kiểm tra xem dãy đó có thoả mãn là dãy tăng hay không?
int check(vector <int> day){
    int check = 1;
    for (int i = 0; i < day.size() -1; i++) {
        if (day[i] > day[i+1]) check = 0;
    }
    return check;
    
}



int main() {
    cin >> n >> k;
    // tạo mảng a để sinh tổ hợp
    for(int i = 1; i <=k; i++) a[i] = i;
    // tạo mảng b để nhập các giá trị bài cho
    int b[n];
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
    } 
    int dem = 0;
    while(ok == 0) {
        // tạo vector day để lưu các giá trị có vị trí a[i] của mảng b (sau khi sinh) để kiểm tra xem có thoả mãn đề bài không?
        vector <int> day;
        for(int i = 1; i<=k ; i++) day.push_back(b[a[i]]);

        // nếu thoả mãn thì dem++
        if(check(day) == 1) {
            dem++;
        }
        // xoá hết các phần tử trong dãy
        day.clear();
        CombinationGen();
    }
    cout << dem;
    
}