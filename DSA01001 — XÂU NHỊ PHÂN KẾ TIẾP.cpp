#include <bits/stdc++.h>
using namespace std;

bool sinh(string &a) {
    int i = a.size() - 1;
    while(i >= 0 && a[i] == '1') {
        a[i] = '0';
        i--;
    }
    if(i < 0) return false;
    a[i] = '1';
    return true;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string a; cin >> a;
        sinh(a);
        cout << a << '\n';
    }
}