#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  int t ; cin >> t ; 
  while ( t -- ){
    int n , k ; cin >> n >> k ; 
    vector<int> a(n);
    for ( int i = 0 ; i < n ; i ++) {
      cin >> a[i] ;
    }
    sort( a.begin() , a.end() );
    k = min ( k , n - k );

    ll s1 = 0 , s2 = 0 ; 
    for ( int i = 0 ; i < n ; i ++ ){
      if( i < k ) {
        s1 += a[i];
      } else s2 += a[i] ;
    }
    cout << s2 - s1 << endl ;
  }
}