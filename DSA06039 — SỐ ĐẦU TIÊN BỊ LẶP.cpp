#include<bits/stdc++.h>
using namespace std;

int main () {
  int t ; cin >> t ; 
  while (t --) {
    int n ; cin >> n ; 
    vector<int> a(n);
    map<int,int> mp;
    for( int i = 0 ; i < n ; i ++){
      cin >> a[i] ;
      mp[a[i]]++;
    }
    int ans = - 1 ;
    for ( int x : a ) {
      if ( mp[x] > 1){
        ans = x;
        break;
      }
    }
    if( ans != -1) {
      cout << ans << " " ;
    } else cout << "NO" ;
    cout << endl;
  }
 }