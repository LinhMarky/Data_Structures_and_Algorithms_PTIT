#include<bits/stdc++.h>
using namespace std;

int main() {
  int t ; cin >> t ;
  while ( t -- ){
    stack<char> st ;
    string s ; cin >> s ;
    bool ok = true;

    for(int i = 0 ;i < s.size() ; i++){
      if( s[i] == '[' || s[i] == '(' || s[i] == '{' ){
        st.push(s[i]);
      }
      else if(!st.empty() && st.top() == '(' && s[i] == ')' ){
        st.pop();
      }
       else if(!st.empty() && st.top() == '[' && s[i] == ']' ){
        st.pop();
      }
       else if(!st.empty() && st.top() == '{' && s[i] == '}' ){
        st.pop();
      }
      else {
      ok = false;
       break;
}
    }
      if( ok && st.empty()) {
        cout << "YES";
      } else{
        cout << "NO";
      }
      cout << endl;
  }
} 