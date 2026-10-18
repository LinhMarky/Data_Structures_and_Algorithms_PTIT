#include<bits/stdc++.h>
using namespace std;
using ll = long long ;


ll mod = 1e9 + 7;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t ; cin >> t ; 
  
  while ( t -- ){
    int n ; cin >> n ;
    vector<int>a(n);
    for ( int i = 0 ; i < n ; i ++ ){
      cin >> a[i];
    }
    sort( a.begin() , a.end() );
    ll res = 0 ; 
    for ( int i = 0 ; i < n ; i ++ ){
      res += 1ll* i * a[i];
      res %= mod;
    }
    cout << res << endl ; 
  }
}