#include<bits/stdc++.h>
using namespace std;

int main() {
  int t ; cin >> t;
  while ( t -- ) {
    int n ; cin >> n ;
    stack<int> st;
    vector<int> v(n);
    vector<int> res(n);
    for ( int i = 0 ; i < n ; i ++ ){
      cin >> v[i] ;
    }
    for(int i = 0 ; i < n ; i ++ ){
      while( !st.empty() && v[st.top()] <= v[i] ){
        st.pop();
      }
      if( st.empty() ) {
        res[i] = i + 1 ;
      }else{
        res[i] = i - st.top();
      }
      st.push(i);
    }
    
    for( int x : res ) {
      cout << x << " ";
    }
    cout << endl;
  }
}