#include<bits/stdc++.h>
using namespace std;

int main() {
  int test ; cin >> test ;
  while ( test -- ) {
    int n ; cin >> n ; 
    vector < int > v(n);
    vector< int > res ;
    for ( int i = 0 ; i < n ; i ++ ){
      cin >> v[i];
    }
    sort(v.begin() , v.end() );
    int left = 0;
    int right = n - 1 ;
    while(left <= right) {
    res.push_back(v[right]);
    --right;

    if(left <= right) {
        res.push_back(v[left]);
        ++left;
    }
  }
  for( int x : res ) {
    cout << x << " ";
  }
  cout << endl;
}
}