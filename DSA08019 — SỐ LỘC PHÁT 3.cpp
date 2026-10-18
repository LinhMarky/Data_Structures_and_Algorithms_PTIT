#include<bits/stdc++.h>
using namespace std;

int main (){
  int t ; cin >> t ;
  while ( t --) {
    int n ; cin >> n ; 
    queue< long long> q ;
    vector<long long> res;
    q.push(6);
    q.push(8);
    while( !q.empty()){
      long long x = q.front() ;
      res.push_back(x);
      q.pop();
      if(to_string(x).size() > n ){
        res.pop_back();
        break;
      }else{
        q.push( x * 10 + 6 );
        q.push( x * 10 + 8 );
      }
    }
    sort( res.begin() , res.end() , greater<long long>());
    cout << res.size() << endl;
    for ( long long x : res ) {
      cout << x << " ";
    }
    cout << endl;
  }
}