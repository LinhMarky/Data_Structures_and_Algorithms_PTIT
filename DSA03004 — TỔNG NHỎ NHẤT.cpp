#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t ; cin >> t ; 
  while ( t -- ) {
    int n ; cin >> n ; 
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i ++ ){
      cin >> v[i];
    }
    ll a = 0 ; 
    ll b = 0 ;
    sort( v.begin() , v.end() );
    for ( int i = 0 ; i < n ; i ++ ){
      if( i % 2 == 0) {
        a = a * 10 + v[i];
      }else {
        b = b * 10 + v[i];
      }
    }
    cout << a + b << endl ; 
  }
}
 