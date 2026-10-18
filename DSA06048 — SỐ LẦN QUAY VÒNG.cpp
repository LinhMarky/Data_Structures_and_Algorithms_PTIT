#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        int k = 0;
        for(int i = 0; i < n - 1; i++) {
            if(v[i] > v[i + 1]) {
                k = i + 1;
                break;
            }
        }
        cout << k << endl;
    }
}