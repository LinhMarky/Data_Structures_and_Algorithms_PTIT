#include<bits/stdc++.h>
using namespace std;

int main() {
    string s ; cin >> s;
    stack<char> X;
    stack<char> Y ;
    for ( int i = 0 ; i < s.size() ; i ++ ){
        if (s[i] == '<') {
			if (X.size()) {
				Y.push(X.top());
				X.pop();
			}
		}
		else if (s[i] == '>') {
			if (Y.size()) {
				X.push(Y.top());
				Y.pop();
			}
		}
		else if (s[i] == '-') {
			if (X.size())
				X.pop();
		}
		else X.push(s[i]);
	}
	while (X.size()) {
		Y.push(X.top());
		X.pop();
	}
	while (Y.size()) {
		cout << Y.top();
		Y.pop();
	}
}
