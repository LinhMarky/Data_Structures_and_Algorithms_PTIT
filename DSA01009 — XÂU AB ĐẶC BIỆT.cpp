#include<bits/stdc++.h>
using namespace std;

int n , k , a[1005] , ok  ; 

void Init() {
  for( int i = 1 ; i <= n ; i ++ ) {
    a[i] = 0 ;
  }
}

void Next(){
     int i = n ; 
     while ( i >= 1 && a[i] == 1 ) {
      a[i] = 0 ; 
      -- i;
     } if(  i == 0 ){
      ok = 0 ;
     }else {
      a[i] = 1 ;
     }
}

bool check(){
  int dem = 0 ; 
  int res = 0 ;
  for ( int i = 1 ; i <= n ; i ++ ){
    if ( a[i] == 0 ) {
      ++ dem ; 
    }else {
      if ( dem == k )
      ++ res;
      if ( dem > k )
      return false ;
      dem = 0 ;
    }
  }
  if ( dem == k ) ++ res ;
  if ( dem > k ) return false;
  return res == 1 ; 
}

int main() {
    cin >> n >> k ;
    ok = 1 ;
    Init();
    vector<vector<int>> v;
    while ( ok ) {
      if (check()){
        vector<int> tmp( a + 1 , a + n + 1 );
        v.push_back(tmp);
      }
      Next();
    }
      cout << v.size() << endl;
      for ( auto it : v) {
        for ( auto x : it ){
          if ( x == 0 ) cout  << "A";
          else cout << "B";
        }
        cout << endl ; 
  }
      
}