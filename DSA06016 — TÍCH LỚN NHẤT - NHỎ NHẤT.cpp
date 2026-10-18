#include<bits/stdc++.h>
using namespace std;

int main (){
  int t ; cin >> t ; 
  while ( t --){
    int n ,  m ; cin >> n >> m ;
    vector< long long > a(n);
    vector< long long > b(m);
    for ( int i = 0 ; i < n ; i ++ ) {
      cin >> a[i];
    }
    for ( int i = 0 ; i < m ; i ++){
      cin >> b[i];
    }
    sort(a.begin() , a.end() , greater<int>());
      long long maxvalue = a[0];
    
    sort( b.begin() , b.end());
    long long minvalue = b[0];

    long long product = maxvalue * minvalue ;
    cout << product << endl;
  }
} 