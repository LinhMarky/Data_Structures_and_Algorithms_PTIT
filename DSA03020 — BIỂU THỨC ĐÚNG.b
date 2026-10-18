#include<bits/stdc++.h>
using namespace std; 

using ll = long long ; 

void solve() {
  string s ; cin >> s;
  vector<int> v ;
  for (int i = 0; i < s.size() ; i++) {
    if( s[i] == '[' ){
      v.push_back(i);
    }
  }
  int cnt = 0 , res = 0 ; 
  int trace = 0 ; 
  for ( int i = 0 ; i < s.size() ; i ++ ){
    if( s[i]  == '[' ){
      ++ cnt ; 
      ++ trace;
    } 
    else if( s[i] == ']' ) -- cnt ;
    // vi tri ki tu khong hop le 
    if( cnt < 0 ){
      res += v[trace] - i ; 
      swap( s[i] , s[v[trace]] );
      cnt = 1 ;
      ++ trace ;
    }
  }
  cout << res << endl ;
}

int main() {
  int t ; cin >> t ; 
  while ( t -- ){
    solve();
  }                                            
}