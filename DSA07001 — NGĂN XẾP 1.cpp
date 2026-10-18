#include<bits/stdc++.h>
using namespace std;

int main () {
  stack<int> st;
  string s ; 
  while(cin >> s) {
  if( s == "push"){
    int x ; cin >> x ;
    st.push(x);
  } 
  else if ( s == "pop"){
      if(!st.empty()){
        st.pop();
      }
  }
  else if (s == "show"){
  if( st.empty()) {
    cout << "empty" << endl;
  } else
  {
    stack<int> tmp = st;
    vector<int> a;
    while( !tmp.empty()){
      a.push_back(tmp.top());
      tmp.pop();
    }
      reverse(a.begin() , a.end() );
      for (int x : a){
        cout << x << " ";
      }
    }
    cout << endl;
  }
}
}