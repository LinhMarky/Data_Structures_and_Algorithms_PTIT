#include <bits/stdc++.h>
using namespace std;

int a[10], n;
bool sinh() {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) return false;
    a[i] = 1;
    return true;
}

int main() {
    cin >> n;
    do{
        bool ok = true;
        for (int i = 1; i <= n / 2; i++) {
            if (a[i] != a[n - i + 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            for (int i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    } while (sinh());
    return 0;
}