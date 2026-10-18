#include<bits/stdc++.h>
using namespace std;

int main (){
  int t ; cin >> t ;
  while ( t -- ) {
    int n ; cin >> n ; 
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i ++ ){
      cin >> v[i] ;
    }
    int l = 0 ; 
    int r = n - 1 ;
    while ( l < r ) {
      if( v[l] > v[r] ){
        swap( v[l] , v[r] );
      }
      ++ l ; 
      -- r ; 
    }
    vector < int > tmp = v ; 
    sort( tmp.begin() , tmp.end() );
    bool ok = true;
    for(int i=0;i<n;i++){
    if(v[i] != tmp[i]){
      cout << "No" << endl ; 
        ok = false;
        break;
        }
      } 
    if (ok) {
      cout << "Yes" << endl ; 
    }
  }
}