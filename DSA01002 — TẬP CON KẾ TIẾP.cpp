#include <bits/stdc++.h>
using namespace std;
int a[105], n, k;
vector<int> Generate(){
    int i = k;
    vector<int> result;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        for(int i = 1; i <= k; i++){
            result.push_back(i);
        }
      
    }else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        for(int i = 1; i <= k; i++){
            result.push_back(a[i]);
        }
    }
    return result;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        for(int x : Generate()){
            cout << x << " ";
        }
        cout << endl;
    }
}