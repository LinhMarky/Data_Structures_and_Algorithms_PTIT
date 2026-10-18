#include<bits/stdc++.h>
using namespace std ; 
using ll = long long ; 

int solve (){
  int n , s , m ; cin >> n >> s >> m ;
  int luongthuc = s * m ; 
  int songayban = s - s/7 ;
  if ( luongthuc > songayban * n ) return - 1 ; 
  for ( int i = 1 ; i <= songayban ; i ++ ){
    if ( luongthuc <= n * i ) return i ; 
  } 
}

int main () {
  int t ; cin >> t ; 
  while ( t --) {
    cout << solve() << endl;
  }
}