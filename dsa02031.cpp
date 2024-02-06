#include <bits/stdc++.h>
using namespace std;

int used[25];
char c, a[1001];
// kiểm tra xem có bị kẹp giữa không
int check()
{
    for (int i = 2; i <= c - 'A' ; i++)
        if ((a[i] == 'A' || a[i] == 'E') && 
        (a[i - 1] != 'A' && a[i - 1] != 'E') && 
        (a[i + 1] != 'A' && a[i + 1] != 'E'))
            return 0;
    return 1;
}

void in() {
    if (check()) {
        for (int i = 1; i <= c - 'A' +1; i++) cout << a[i];
        cout << endl;

    }
}

void Try (int i ) {
    for (char j = 'A' ; j <= c; j++) {
        if(used[j] == 0) {
            a[i] = j; used[j] = 1;
            if(i == c - 'A' + 1) in();
            else Try(i+1);
            used[j] = 0;
        }

    }
}


int main() {
    cin >> c;
    Try(1);
}