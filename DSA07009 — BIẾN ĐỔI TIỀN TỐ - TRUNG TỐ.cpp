#include<bits/stdc++.h>
using namespace std;


void solve(string s ){
  stack<string > st ; 
  for ( int i = s.size() - 1 ; i >= 0 ; i -- ){
    if ( isalpha(s[i]) ){
      st.push( string( 1 , s[i] ));
    }
    else {
      string opera1 = st.top();
      st.pop();
      string opera2 = st.top();
      st.pop();
      string res = "(" + opera1 + string( 1 , s[i] ) + opera2 + ")";
      st.push(res); 
    }
  }
  cout << st.top() << endl ; 
}


int main(){
  int t ; cin >> t ; 
  while ( t -- ) {
    string s ; cin >> s ; 
    solve(s);
  }
}