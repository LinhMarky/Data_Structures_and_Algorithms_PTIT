#include<bits/stdc++.h>
using namespace std;

int main() {
  int test ; cin >> test ;
  stack<int> st;
  while (test -- ) {
    string s ; cin >> s ;

    if( s== "PUSH") {
      int x ; cin >> x ;
      st.push(x);
    }
    else if (s == "POP") {
      if (!st.empty()) {
      st.pop();
    }
  }
    else if( s == "PRINT" ){
      if( !st.empty()) {
        cout << st.top();
    }else cout << "NONE";
  }
  cout << endl;
  }
}