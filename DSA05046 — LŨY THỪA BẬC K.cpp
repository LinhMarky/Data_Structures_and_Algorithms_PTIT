#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
ll Power(ll a, int b){
  if(b == 0){
    return 1;
  }
    ll temp = Power(a, b / 2);
    if(b % 2 == 1){
      return ((((temp % MOD) * (temp % MOD)) % MOD) * (a % MOD)) % MOD;
    }else{
      return ((temp % MOD) * (temp % MOD)) % MOD;
    }
}
int main (){
  int t; cin >> t;
  while(t--){
    ll n; int k; cin >> n >> k;
    ll result = 0;
    for(int i = 1; i <= n; i++){
      result = (result % MOD + Power(i, k)  % MOD) % MOD;
    }
    cout << result << endl;
  }
}