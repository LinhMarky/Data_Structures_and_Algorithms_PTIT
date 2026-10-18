#include<bits/stdc++.h>
using namespace std;

int findTotal(vector<int> a , int n){
  int l = 0 ;
  int r = n - 1 ;
  int result = INT_MAX;
  while( l < r ) {
    int sum = ( a[l] + a[r] ) ;
    if( abs(sum) < abs(result) || abs(sum) == abs(result) && sum < result){
      result = sum;
    }
    if( sum < 0 ){
      ++ l;
    } else if ( sum > 0){
      -- r;
    } else break;
  }
  return result ; 
} 


int main () {
  int test ; cin >> test ;
  while( test --) {
    int n ; cin >> n ;
    vector< int > v(n);
    for( int i = 0 ; i < n ; i ++ ){
      cin >> v[i] ;
    }
    sort(begin(v), end(v));
    int result = findTotal(v, n);
    cout << result << endl;
  }
}