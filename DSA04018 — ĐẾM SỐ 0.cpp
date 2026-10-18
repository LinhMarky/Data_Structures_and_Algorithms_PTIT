#include<bits/stdc++.h>
using namespace std;

int main () {
  int t ; cin >> t ;
  while ( t -- ){
    int n ; cin >> n ;
    vector <int > a(n);
    map<int , int> mp;
    for ( int i = 0 ; i < n ; i ++ ){
      cin >> a[i] ;
      mp[a[i]] ++ ;
    }
    for ( auto x : mp) {
      if ( x.first == 0 ) {
        cout << x.second << " " ;
      } 
    }
    cout << endl;
  }
}