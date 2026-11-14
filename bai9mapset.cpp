#include <bits/stdc++.h>
using namespace std;

bool kiemtra(vector<string> vt, string x) {
    for( string i : vt) {
        if(i == x) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss >> word) {
            v.push_back(word);
        }
        for(string x : v) {
            if(kiemtra(v, x)) {
                cout << x << endl; break;
            }
            v.push_back(x);
        }
    }
    return 0;
}