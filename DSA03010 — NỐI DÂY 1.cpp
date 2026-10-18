#include<bits/stdc++.h>
using namespace std;

int main() {
  int t ; cin >> t ; 
  while ( t -- ) {
    int n ; cin >> n ; 
    vector<int> v(n) ;
    for (int i = 0 ; i < n ; i ++ ){
      cin >> v[i];
    }
    priority_queue<int , vector<int> , greater<int> > q ;
    for ( int i = 0 ; i < n ; i ++ ){
      q.push(v[i]);
    }
    long long ans = 0 ; 
    while ( q.size() > 1 ){
      int x = q.top();
      q.pop();
      int y = q.top();
      q.pop();
      ans += x + y ; 
      q.push( x + y );
    }
    cout << ans << endl ; 
  }
}