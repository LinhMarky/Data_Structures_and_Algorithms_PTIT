#include<bits/stdc++.h>
using namespace std;
 
int main () {
  int t ; cin >> t;
  while ( t --){
    long long n , k  ; cin >> n >> k ;
    vector<long long> v(n);
    for ( int i = 0 ; i < n ; i ++) {
      cin >> v[i];
    }
    int cnt = 0 ; 
    int l = 0 ;
    int r = 1 ;
    while ( l <= r ) {
      if ( v[l] + v[r] == k ){
        ++ cnt;
        r ++;
        }
        ++ l;
        r = l + 1 ;
    }
    cout << cnt << endl; 
  }
}