#include<bits/stdc++.h>
using namespace std;
using ll = long long ; 


int main(){
  int t ; cin >> t ; 
  while ( t -- ){
    int n ; cin >> n ; 
    vector < int > a(n);
    for ( int i = 0 ; i < n ; i ++ ) cin >> a[i];
    vector<int> res ; 
    queue<int> q ;
    sort( a.begin() , a.end() );
    int total = 0 ; 
    for ( int i = 0 ; i < n ; i ++ ){
      total = total + a[i];
      if ( total % 3 == 0 ){
        q.push(a[i]);
      }else total -= a[i] ;
    }

    while( !q.empty() ){
      cout << q.front() ; 
    }
    cout << endl ; 
  }
}
 