#include<bits/stdc++.h>
using namespace std;

vector<int> number(int x ) {
  vector<int> res ;
  while( x > 0 ) {
    int duoi = x % 10 ;
    res.push_back(duoi);
    x = x / 10 ;
  }
  return res ;
}

int main() {
  int t ; cin >> t ;
  while( t --) {
    int n ; cin >> n ; 
    set<int> se;
    vector<int> a(n);
    for( int i = 0 ; i < n ; i ++){
      cin >> a[i]; 
   }
   for( int i = 0 ; i < n ; i ++) {
      vector<int> result = number(a[i]);
   for( int x : result) {
    se.insert(x);
  }
}
   for( int x : se) {
    cout << x << " " ;
   }
   cout << endl;
  }
}