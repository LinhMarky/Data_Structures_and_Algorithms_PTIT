#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t ;
    while ( t -- ){
        string s ; cin >> s ;
        stack<char> st;
        int count = 0 ;
        for (char x : s ){
            if ( x == '(' ){
                st.push(x);
            }else{
                if ( !st.empty() && st.top() == '('  && x == ')' ){
                    st.pop();
                    count += 2 ;
                }
            }
        }
        cout << count << endl;
    }
}
