#include<bits/stdc++.h>
using namespace std;

int main() {
  int test ; cin >> test ; 
  while (test -- ) {
    int n , x ; cin >> n >> x;
    map<int , int> mp ;
    vector<int> v(n) ;
    for ( int i = 0 ; i < n ; i ++ ) {
      cin >> v[i] ;
      mp[v[i]] ++ ;
    }
    if(mp[x] == 0){
      mp[x] = -1;
    }
    cout << mp[x] << endl;
  }
}