#include<bits/stdc++.h>
using namespace std;

int n , a[1005];
int main () {
  int t ; cin >> t ; 
  while ( t -- ){
    cin >> n ;
    for ( int i = 0 ; i < n ; i ++ ){
      a[i] = n - i;
    }
    for(int i = 0 ; i < n ; i ++ )
      cout << a[i];
      cout <<  " " ;
      while( prev_permutation( a , a + n)){
        for ( int i = 0 ; i < n ; i ++ ){
          cout << a[i] ;
        }
        cout << " ";
      }
      cout << endl;
  }
}