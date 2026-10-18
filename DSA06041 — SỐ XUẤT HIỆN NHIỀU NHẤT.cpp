#include<bits/stdc++.h>
using namespace std;

int main() {
  int t ; cin >> t ;
  while ( t --){
    int n ; cin >> n ; 
    map<int,int> mp;
    vector<int> a(n) ;
    for ( int i = 0 ; i < n ; i ++ ) {
      cin >> a[i];
      mp[a[i]] ++ ;
    }

    int max_val = INT_MIN;
    int res;
    for ( auto x : mp) {
      if (x.second > max_val){
         max_val = x.second;
         res = x.first;
      }
    }

    if ( max_val > n/2){
      cout << res << " ";
    } else cout << "NO" << " ";
  
    cout << endl;
  }
} 