#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  int n ; cin >> n ; 
  int a[n];
  for ( int i = 0 ; i < n ; i ++ ){
    cin >> a[i];
  }
  sort( a , a + n );
  ll x1 = 1LL * a[0] * a[1] * a[n - 1];
  ll x2 = 1LL * a[n - 3] * a[n - 2] * a[n - 1];
  ll x3 = 1LL * a[0] * a[1];
  ll x4 = 1LL * a[n - 2] * a[ n - 1 ];
  cout << max( max( x1 , x2) , max(x3 , x4) );
}