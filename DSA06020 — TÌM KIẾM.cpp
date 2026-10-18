#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool found = false;
        for(int i = 0; i < n; i++) {
            if(v[i] == x) {
                found = true;
                break;
            }
        }
        if(found)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}