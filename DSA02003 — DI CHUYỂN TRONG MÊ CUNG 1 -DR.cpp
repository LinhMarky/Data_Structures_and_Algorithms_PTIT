#include<bits/stdc++.h>
using namespace std;

int x[100] , n , ok;
int a[100][100];
vector<string> res;

void inp() {
  for ( int i = 1 ;i <= n; i ++ ){
    for ( int j = 1 ; j <= n ; j ++ ){
      cin >> a[i][j];
    }
  }
}

void Try( int i , int j , string s  ){
  if ( i == n && j == n ) {
    res.push_back(s);
    ok = 1 ;
    return;
  }
  if( i + 1 <= n && a[i + 1][j] == 1 ){
    Try( i + 1 , j , s + "D");
  }
  if ( j + 1 <= n && a[i][j + 1] == 1){
    Try( i , j + 1 , s + "R" );
  }
}


int main(){
  int t ; cin >> t ;
  while ( t -- ) {
    cin >> n ;
    inp();
    ok = 0 ;
    res.clear();
    if ( a[1][1] && a[n][n] ){
      Try( 1 , 1 , "" );
    }
    if ( !ok ){
      cout << "-1";
    }else {
      sort(res.begin() , res.end() );
      for (auto x : res ){
        cout << x << " ";
      }
    }
    cout << endl ; 
  }
}