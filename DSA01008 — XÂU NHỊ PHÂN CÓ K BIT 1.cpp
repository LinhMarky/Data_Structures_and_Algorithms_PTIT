#include <bits/stdc++.h>
using namespace std;

int a[20], n, k;

void Try(int i, int cnt) {
    if (i > n) {
        if (cnt == k) {
            for (int j = 0; j < n; j++)
                cout << a[j];
            cout << endl;
        }
        return;
    }

    a[i] = 0;
    Try(i + 1, cnt);
    a[i] = 1;
    Try(i + 1, cnt + 1);
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        Try(1, 0);
    }
}