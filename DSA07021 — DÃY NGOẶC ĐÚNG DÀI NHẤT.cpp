#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    string s; cin >> s;
    stack<int> st;
    st.push(-1);
    int result = -1e7;
    for(int i = 0;i < s.size() ; i++){
      if(s[i] == '('){
        st.push(i);
      }else{
        st.pop();
        if(st.empty()){
          st.push(i);
        }else{
          result = max(result, i - st.top());
        }
      }
    }
    cout << result << endl;
  }
}