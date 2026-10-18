#include <bits/stdc++.h>
using namespace std;

int main(){
  int test; cin >> test;
  while (test--){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
      cin >> a[i];
      mp[a[i]]++;
    }
    vector<pair<int, int>> v;
    for (pair<int, int> x : mp){
      v.push_back(x);
    }
    stable_sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
      if (a.second == b.second) {
        return a.first < b.first;
      }
      else{
        return a.second > b.second;
      }
    });
    for (pair<int, int> x : v){
      for (int i = 0; i < x.second; i++){
        cout << x.first << " ";
      }
    }
    cout << endl;
  }
}