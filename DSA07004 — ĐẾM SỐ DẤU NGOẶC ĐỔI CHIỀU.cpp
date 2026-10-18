#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    string s; cin >> s;
    stack <char> st;
    int cnt = 0;
    for(char x : s){
      if(x == '('){
        st.push(x);
      }else{
        if(st.empty()){
          st.push('(');
          ++ cnt;
        }else{
          st.pop();
        }
      }
    }
    cout << cnt + st.size() / 2 << endl;
  }
}