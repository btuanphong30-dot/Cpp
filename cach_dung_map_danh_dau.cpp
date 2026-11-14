#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<long long, int> mp;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            mp[x] = 1;
        }
        int q;
        cin >> q;
        while(q--) {
            long long a;
            cin >> a;
            if(mp[a] == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}