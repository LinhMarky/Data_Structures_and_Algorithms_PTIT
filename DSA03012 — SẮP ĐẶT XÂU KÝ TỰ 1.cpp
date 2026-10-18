#include<bits/stdc++.h>
using namespace std;

int main(){
  int t ; cin >> t ;
  while ( t --){
    string s ; cin >> s ;
    map<char, int> mp; 
    for(char x : s ) mp[x]++;
    int max_fre = 0 ; 
    for ( auto it : mp ){
      max_fre = max ( max_fre , it.second );
    }
    int remain = s.size() - max_fre ;
    if( max_fre - 1 <= remain ){
      cout << 1 << endl ; 
    } else cout << -1 << endl ; 
  }
}