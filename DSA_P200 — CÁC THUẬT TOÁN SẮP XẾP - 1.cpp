#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n;  cin >> n;
        int cnt[10000] = {};
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (int i = 1000; i <= 9999; i++) {
            while (cnt[i] > 0) {
                cout << i << " ";
                cnt[i]--;
            }
        }
        cout << '\n';
    }
    return 0;
}