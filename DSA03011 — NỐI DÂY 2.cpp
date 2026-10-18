#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
ll mod = 1e9 + 7 ;

int main() {
  int t ; cin >> t ;
  while ( t -- ){
    int n ; cin >> n ;
    vector<ll> v(n);
    for ( int i = 0 ; i <  n ; i ++ ){
      cin >> v[i] ;
    }
    priority_queue< int , vector<int> , greater<int> > pq;
    for ( int i = 0 ; i < n ; i++ ){
      pq.push(v[i]);
    } 

    ll ans = 0 ;   
    while( pq.size() > 1 ){
      int x = pq.top(); pq.pop();
      int y = pq.top(); pq.pop();
      ans += ( x + y ) % mod;
      pq.push((x + y) % mod);
    }
    cout << ans % mod << endl;
  }
}