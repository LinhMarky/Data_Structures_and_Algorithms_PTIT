#include<bits/stdc++.h>
using namespace std;

struct job {
  int id ; 
  int deadline; 
  int profit;
};
bool cmp ( job a , job b){
  return a.profit > b.profit ; 
}

int main() {
  int t ; cin >> t ; 
  while ( t -- ){
    int n ; cin >> n ; 
    job a[n];
    for ( int i = 0 ; i < n ; i ++ ){
       cin >> a [i].id >> a[i].deadline >> a[i].profit ;
    }
    sort( a , a + n , cmp) ;
    bool used[1005];
    memset(used , false , sizeof(used));
    int mark[1005];
    int res = 0 , sum = 0 ; 
    for( int i = 0 ; i < n ; i ++ ){
      for ( int  j = a[i].deadline - 1 ; j >= 0 ; j -- ){
        if ( used[j] == false ){
          ++ res;
          used[j] = true;     
          mark[j] = i; 
          sum += a[i].profit;
          break
        }
      }
    }
    cout << res << " " << sum << endl;
  }
}
