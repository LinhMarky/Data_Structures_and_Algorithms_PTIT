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
    long long cnt = 0 ; 
    int l = 0 ;
    int r = 1 ;
    while (l < n - 1) {
      if ( abs( v[l] - v[r] ) < k) {
        ++cnt;
      }
      ++r;
      if (r == n) {
        ++l;
        r = l + 1;
      }
    }
    cout << cnt << endl; 
  }
}