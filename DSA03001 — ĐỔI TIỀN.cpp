#include<bits/stdc++.h>
using namespace std ;


int main (){
  int t ; cin >> t ; 
  while ( t --){
    long long n ; cin >> n ;
    int a[] = {1000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 , 1 };
    int cnt = 0 ;

    for ( int i = 0 ; i < 10 ; i ++ ) {
      while ( n >= a[i]){
        n = n - a[i];
        cnt ++;
      }
    }
    cout << cnt << endl;
    
  }
}