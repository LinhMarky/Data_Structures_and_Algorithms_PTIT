#include<bits/stdc++.h>
using namespace std;

int main() {
  int test ; cin >> test ;
  while ( test -- ){
    int n , k ; cin >> n >> k ;
    vector<int> v(n);
    for( int i = 0 ; i < n ; i ++ ){
      cin >> v[i] ;
    }
    stable_sort(v.begin() , v.end() , greater<int>() );
    for( int i = 0 ; i < k ; i ++ ){
        cout << v[i] << " ";
    }
    cout << endl;
  }
}