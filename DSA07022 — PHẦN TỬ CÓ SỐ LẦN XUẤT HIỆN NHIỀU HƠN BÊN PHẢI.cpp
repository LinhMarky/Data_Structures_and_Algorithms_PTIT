#include<bits/stdc++.h> 
using namespace std;

int main () {
  int t ; cin >> t ;
  while (t -- ) {
    int n ; cin >> n ;
    stack<int> st;
    vector<int> res(n, -1);
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i ++) {
      cin >> v[i];
    }
    map<int, int> danhdau;
    for(int i = 0; i < n; i++){
      danhdau[v[i]] += 1;
    }
    for(int i = n - 1; i >= 0; i--){
      while(!st.empty() && danhdau[v[i]] >= danhdau[st.top()]){
        st.pop();
      }
      if(!st.empty()){
        res[i] = st.top();
      }
      st.push(v[i]);
    }
    for(int i = 0; i < n; i++){
      cout << res[i] << " ";
    } 
    cout << endl;
  }
}