#include<bits/stdc++.h>
using namespace std;

int n,a[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i ++ ){
        a[i] = i;
    }
    int dem=1;
    while(true){
        cout << dem++ << ": ";
        for(int i = 1 ;i <= n; i ++)
            cout << a[i] << " ";
        cout << endl;
        if(next_permutation(a+1 , a + n + 1) == false )
            break;
            
    }
}