#include<bits/stdc++.h>
using namespace std;

int a[105] , n ;
bool NextPermutation(){
  int i = n - 1 ; 
  while ( i >= 1 && a[i] > a[i + 1]){
    -- i;
  }
  if (i == 0) return false; 
    int j = n; 
    while (a[i] > a[j]) {
        --j; 
    }
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n + 1);  
    return true; 
}
    

int main(){
    int test; cin >> test;
    while(test--){
        cin >> n;
        for(int i = 1; i <= n; i++) a[i] = i;
        while(true){
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << " ";
            if (NextPermutation() == false) {
                break;
            }
        }
        cout << endl;
    }
    return 0;
}