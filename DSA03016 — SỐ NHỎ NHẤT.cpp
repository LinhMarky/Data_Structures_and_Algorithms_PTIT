#include<bits/stdc++.h>
using namespace std ;

void sonhonhat() {
  int s , d ; cin >> s >> d; 
  if ( s == 0 || s > 9 * d ){
    cout << -1 << endl ;
    return ;
  }
  s = s - 1 ; 
  int a[1005] = {0};
  for ( int i = d -1 ; i > 0 ; i --) {
    if ( s >= 9 ) {
      a[i] = 9 ;
      s = s - 9 ;
    }else {
      a[i] = s ;
      s = 0 ;
    }
  }
  a[0] = s + 1 ; 
  for ( int i = 0 ; i < d ; i ++ ){
    cout << a[i] ;
  }
  cout << endl; 
}

int main(){
  int t ; cin >> t ;
  while ( t --) {
    sonhonhat();
  }
}