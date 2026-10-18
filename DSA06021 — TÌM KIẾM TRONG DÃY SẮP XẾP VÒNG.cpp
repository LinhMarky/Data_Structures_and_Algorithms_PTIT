#include<bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> a, int n, int x){
  int l = 0, r = n - 1;
  if(a[l] < a[r]){
    while(l <= r){
      int mid = (l + r) / 2;
      if(a[mid] == x){
        return mid;
      }else if(a[mid] <= x){
        l = mid + 1;
      }else{
        r = mid - 1;
      }
    }
    return -1;
  }else{
    while(l <= r){
      int mid = (l + r) / 2;
      if(a[mid] == x){
        return mid;
      }else if(a[mid] < x){
        l = mid;
      }else{
        if(a[r] < x){
          r = mid;
        }else{
          l = mid;
        }
      }
    }
    return -1;
  }
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, x;
        cin >> n >> x;
        vector <int> a(n);
        for(int i = 0; i < n; i++){
          cin >> a[i];
        }
        cout << Binary_Search(a, n, x) + 1 << endl;
  }
}