#include<bits/stdc++.h>
using namespace std;

int main() {
  int n  ; cin >> n;
  vector< int > v(n) ;
  for( int i = 0 ; i < n ; i ++) {
    cin >> v[i] ;
  }
  int x ; cin >> x;
  vector<int> res;
  for( int i = 0 ; i < n ; i ++) {
    if ( v[i] != x ) {
      res.push_back(v[i]);
    }
  }
  for(int x : res ) {
    cout << x << " " ;
    
  }
}
