#include<bits/stdc++.h>
using namespace std;

int main () {
  int test ; cin >> test ;
  while ( test -- ){
    int k ; cin >> k ; string s;
    cin >> s;
    queue<int> q;
    map<char , int > mp;
    for( int i = 0 ; i < s.size() ; i ++ ){
      mp[s[i]]++;
    }
    priority_queue<int> pq;
    for(auto x : mp){
      pq.push(x.second);
    }
    for(int i = 1; i <= k; i++){
      int x = pq.top(); pq.pop();
      pq.push(x - 1);
    }

    long long total = 0;
    while(!pq.empty()){
      int x = pq.top(); pq.pop();
      total += 1ll * x * x;
    }
    cout << total << endl;
  }
}