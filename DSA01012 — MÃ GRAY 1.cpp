#include<bits/stdc++.h>
using namespace std;

int n , a[1005] , ok;

void Init() {
  for( int i = 0 ; i < n ; i ++ ){
    a[i] = 0 ; 
  }
}

void Generate() {
 int i = n ;
 while( i >= 1 && a[i] == 1) {
  a[i] = 0 ;
  -- i;
  if( i == 0 ){
    ok = 0 ;
  }
 else{
  a[i] = 1 ;
 }
}
}


int main(){
  int t ; cin >> t ; 
  while ( t -- ){
    int n ; cin >> n ; 


  } 
}