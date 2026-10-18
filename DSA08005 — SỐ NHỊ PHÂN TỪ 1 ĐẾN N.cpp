#include<bits/stdc++.h> 
using namespace std;

int main () {
  int t ; cin >> t ; 
  while (t --){
    int n ; cin >> n ;
    vector < long long > res ;
    queue< long long > q ;
    q.push(1);
    while( res.size() < n ) {
      long long x = q.front();
      q.pop();
      res.push_back(x);
      q.push(x * 10);
      q.push(x * 10 + 1);
    }
    for( long long x : res){
      cout << x << " ";
    }
    cout << endl;
  } 
}