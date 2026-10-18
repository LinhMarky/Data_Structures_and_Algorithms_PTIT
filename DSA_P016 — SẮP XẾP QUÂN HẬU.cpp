#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int n = 8 , X[100] , cot[100] , d1[200] , d2[200] , res;
int a[100][100];

void Init(){
  for ( int i = 1 ; i <= n ; i ++ ){
    for ( int j = 1 ; j <= n ; j ++ ){
      cin >> a[i][j];
    }
  }
  memset( cot , 0 , sizeof(cot));
  memset( d1 , 0 , sizeof(d1));
  memset( d2 , 0 , sizeof(d2));
}

void Try(int i){
  for ( int j = 1 ; j <= n ; j ++ ){
    if ( cot[j] == 0 && d1[i - j + n ] == 0 && d2[ i + j - 1 ] == 0 ){
      X[i] = j ; 
      cot[j] = 1;
      d1[i - j + n ] = 1;
      d2[ i + j - 1 ] = 1;
    
    if ( i == n ){
    int sum = 0 ; 
    for (int k = 1 ; k <= n ; k ++ ){
      sum += a[k][X[k]];
    }
    res = max ( res , sum );
  }
  else{
    Try( i + 1 );
  }
    cot[j] = 0;
    d1[i - j + n ] = 0;
    d2[ i + j - 1 ] = 0;
}
}
}

int main() {
  int t ; cin >> t ;
  for ( int test = 1 ; test <= t ; test ++ ){
    Init();
    res = INT_MIN;
    Try(1);
    cout << "Test " << test << ": " << res << endl;
  }
}