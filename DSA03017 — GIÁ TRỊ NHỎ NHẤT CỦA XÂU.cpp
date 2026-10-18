#include<bits/stdc++.h>
using namespace std;

int main() {
  int t ; cin >> t ;
  while ( t -- ){
    int k ; cin >> k ; 
    string s ; cin >> s ; 
    priority_queue< int > q ;
    map< char , int > mp; 
    for ( char x : s ){
      mp[x]++;
    }
    for ( auto y : mp ){
      q.push( y.second);
    }
    while( k -- ){
      int tmp = q.top(); q.pop();
      -- tmp ; 
       q.push(max( tmp , 0 ));
    }
    long long ans = 0 ;
    while (!q.empty() ){
      ans += q.top() * q.top() ; 
      q.pop();
    }
    cout << ans << endl ;  
  }
}