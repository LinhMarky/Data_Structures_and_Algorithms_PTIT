#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<int,int>> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        int minIndex = a[0].second;
        int minValue = a[0].first;
        int ans = -1;
        for(int i = 1; i < n; i++) {            
            if(a[i].first > minValue) {
                ans = max(ans, a[i].second - minIndex);
            }

            if(a[i].second < minIndex) {
                minIndex = a[i].second;
                minValue = a[i].first;
            }
        }
        cout << ans << endl;
    }
}