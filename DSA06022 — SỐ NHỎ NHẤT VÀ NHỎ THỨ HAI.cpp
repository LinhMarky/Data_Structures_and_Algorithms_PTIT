#include<bits/stdc++.h>
using namespace std;

int main() {
  int test ; cin >> test ;
  while( test --) {
    int n ; cin >> n ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i ++) {
      cin >> v[i];
    }
    stable_sort(v.begin() , v.end() );


      if( v[0] == v[1]){
        cout <<  -1 << " ";
      } else{
        cout << v[0] << " " << v[1];
      }
    cout << endl;
  }
}