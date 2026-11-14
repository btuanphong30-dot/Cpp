#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int K;
        cin >> K;
        cin.ignore();
        string s;
        getline (cin, s);

        map<char, int> mp;
        for(char c : s) mp[c]++;

        while(K--) {
            char kq;
            int demmax = 0;
            for(auto i : mp) {
                char tu = i.first;
                int dem = i.second;
                if(dem > demmax) {
                    kq = tu;
                    demmax = dem;
                }
            }
            mp[kq]--;
        }
        long long giatrinhonhat = 0;
        for(auto i : mp) {
            giatrinhonhat += (long long)i.second*i.second;
        }
        cout << giatrinhonhat << endl;
    }
    return 0;
}