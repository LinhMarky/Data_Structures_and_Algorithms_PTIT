#include<bits/stdc++.h>
using namespace std;

int main() {
  int test ; cin >> test ;
  while (test -- ) {
    int n ; cin >> n ;
    queue<int> q;
    q.push(9);
    while(!q.empty()){
      auto x = q.front(); 
      q.pop();
      if(x % n == 0){
        cout << x << endl;
        break;
      }
      q.push( x * 10);
      q.push(  x * 10 + 9);
      
    }
  }
  
}