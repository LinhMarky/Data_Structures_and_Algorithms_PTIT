#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

ll power(ll n,ll k) {
    if(k == 0) return 1;
    ll x = power(n, k / 2);
    x = x * x % 1000000007;
    if(k % 2) x = x * n % 1000000007;
    return x;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;
        cout << power(n, k) << endl;
    }
}