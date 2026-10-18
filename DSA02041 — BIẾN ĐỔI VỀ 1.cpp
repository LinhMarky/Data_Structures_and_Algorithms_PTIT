#include<bits/stdc++.h>
using namespace std;
int dp[1000005] = {0};
int main() {
  int test ; cin >> test ;
  while ( test --) {
    int n; cin >> n;
    memset(dp, 0, sizeof(dp));
    for(int i = 2; i <= n; i++){
      dp[i] = dp[i - 1] + 1;
      if(i % 3 == 0){
        dp[i] = min(dp[i], dp[i / 3] + 1);
      }
      if(i % 2 == 0){
        dp[i] = min(dp[i], dp[i / 2]  + 1);
      }
    }
    cout << dp[n] << endl;
  }
}