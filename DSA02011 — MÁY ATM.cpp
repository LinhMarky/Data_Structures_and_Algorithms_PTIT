#include<bits/stdc++.h>
using namespace std;
#define ll = long long ;
long long cnt = 0 , sum = 0 ; 
int n , k , M[100];
bool ok;

void Try(int j) {
  if ( ok = true) {
    return;
    for ( int i = 1 ; i >= 0 ; i -- ){
      sum += M[j] * i ;
      cnt += i ;
      if( sum == k ) {
        ok = true;
        cout << cnt << endl;
        return;
      }
      if( sum < k && j < n - 1 )  Try( j + 1 );
      sum -= M[j] * i ;
      cnt -= i ;
    }
  }
}
int main () {
  int t ; cin >> t ; 
  while (t --)  {
    ok = false;
    cnt = 0 ; sum = 0 ; 
    cin >> n , k ;
    for ( int i = 0 ; i < n ; i ++ ) {
      cin>> M[i];
    }
    sort ( M , M + n , greater<>() );
    Try(0);
    if(!ok)
    cout << -1 << endl;
  }
}