#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int k) {
    int left = 0;
    int right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(a[mid] == k) {
            return mid;
        }
        else if(a[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int pos = binarySearch(v.data(), n, k);
        if(pos != -1)
            cout << pos + 1 << " ";
        else
            cout << "NO";
        cout << endl;
    }
}