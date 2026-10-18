#include<bits/stdc++.h>
using namespace std;
bool nt[1000005];
void Sieve(){
  for(int i = 2; i <= 1000000; i++){
    nt[i] = true;
  }
  for(int i = 2; i * i <= 1000000; i++){
    if(nt[i]){
      for(int j = i * i; j <= 1000000; j += i){
        nt[j] = false;
      }
    }
  }
}

int main () {
  int t ; cin >> t ;
  Sieve();
  while(t -- ) {
    int n ; cin >> n ;
    int ok = true;
    vector<int> res;
    for( int i = 2 ; i <= n / 2 ; i ++ ){
      if(nt[i] && nt[n - i]){
        cout << i << " " << n - i << endl;
        ok = false;
        break;
      }
    }
    if(ok){
      cout << -1 << endl;
    }
  }
}