#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        queue<long long> q;
        q.push(1);
        long long cnt = 0;
        while(!q.empty()){
            long long x = q.front();
            q.pop();
            if(x > n) break;
            ++cnt;
            if(x <= n / 10)
                q.push(x * 10);
            if(x <= (n - 1) / 10)
                q.push(x * 10 + 1);
        }
        cout << cnt << endl;
    }
}