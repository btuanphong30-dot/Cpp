#include <bits/stdc++.h>
using namespace std;

string xauNhiPhanTiepTheo(string s) {
    int n = s.size();
    int i = n - 1;
    
    while (i >= 0 && s[i] == '1') {
        i--;
    }
    
    if (i < 0) {
        return string(n, '0');
    } else {
    s[i] = '1';
    for (int j = i + 1; j < n; j++) {
        s[j] = '0';
    }
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while (T--) {
        string X;
        cin >> X;
        cout << xauNhiPhanTiepTheo(X) << endl;
    }
    
    return 0;
}