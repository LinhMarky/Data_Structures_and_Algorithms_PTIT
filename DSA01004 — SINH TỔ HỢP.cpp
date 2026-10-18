#include<bits/stdc++.h>
using namespace std;

int a[105] , n , k ;
void Initial(){
  for(int i = 1; i <= k; i++) a[i] = i;
}
bool check = true;
void Generate() {
  int i = k ;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
      check = false;
    }else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
}
}
int main() {
  int test ; cin >> test ;
  while ( test -- ) {
   cin >> n >> k ;
   Initial();
   check = true;
   while(check){
    for(int i = 1; i <= k; i++){
      cout << a[i];
    }
    cout << " ";
    Generate();
   }
   cout << endl;
  }
  
}