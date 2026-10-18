#include<bits/stdc++.h>
using namespace std;

int n, k, a[105];
vector<vector<int>> res;
vector<int> temp;

void Try(int pos) {
  for ( int j = pos ; j <= n ; j ++) {
    if( temp.empty() || a[j] > temp.back()){
      temp.push_back(a[j]);
      if(temp.size() == k){
        res.push_back(temp);
      }else {
        Try( j + 1);
      }
      temp.pop_back();
    }
  }
}

int main() {
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> a[i];
  Try(1);
  cout << res.size() << endl;
}