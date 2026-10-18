#include<bits/stdc++.h>
using namespace std;

int main() {
  int t ; cin >> t ; 
  while ( t -- ){
  int d ; cin >> d ; 
  string s ; cin >> s ;
  map<char , int> mp ; 
  for ( char&x : s) mp[x] ++;
  int k = 0 ; for ( auto p : mp) k = max(k , p.second);
  int n = s.size();
  if( k - ( n - k ) / ( d -1 ) <= 1){
    cout << "1" << endl ; 
  } else cout << "-1" << endl ; 
  }
}