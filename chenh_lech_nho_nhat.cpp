#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int main () {
    int t; 
    cin >> t; 

    while (t--) {
        int n ; 
        cin >> n; 

        int chenhlechnhonhat = 1000000;
        for ( int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        sort ( a , a + n);
        for ( int i = 1 ; i < n ; i++) {
            int k = a[i] - a[i-1];
            chenhlechnhonhat = min ( chenhlechnhonhat , k);
        }
        cout << chenhlechnhonhat <<"\n";
    }
    
}