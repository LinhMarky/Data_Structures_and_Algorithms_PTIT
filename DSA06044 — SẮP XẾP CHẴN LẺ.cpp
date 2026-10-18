#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> chan ;
    vector<int> le;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        if(i % 2 == 1)
            le.push_back(x);
        else
            chan.push_back(x);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());

    int x = 0, y = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            cout << le[x] << " ";
            x++;
        }
        else {
            cout << chan[y] << " ";
            y++;
        }
    }
}